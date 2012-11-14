#include "org_vamp_plugins_RealTime.h"

#include <vamp-hostsdk/RealTime.h>

#include "handle.h"

using Vamp::RealTime;
using std::string;

void
Java_org_vamp_1plugins_RealTime_dispose(JNIEnv *env, jobject obj)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    setHandle<RealTime>(env, obj, 0);
    delete rt;
}

jint
Java_org_vamp_1plugins_RealTime_sec(JNIEnv *env, jobject obj)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    return rt->sec;
}

jint
Java_org_vamp_1plugins_RealTime_nsec(JNIEnv *env, jobject obj)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    return rt->nsec;
}    

jint
Java_org_vamp_1plugins_RealTime_usec(JNIEnv *env, jobject obj)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    return rt->usec();
}

jint
Java_org_vamp_1plugins_RealTime_msec(JNIEnv *env, jobject obj)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    return rt->msec();
}

jstring
Java_org_vamp_1plugins_RealTime_toString(JNIEnv *env, jobject obj)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    return env->NewStringUTF(rt->toString().c_str());
}

jstring
Java_org_vamp_1plugins_RealTime_toText(JNIEnv *env, jobject obj)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    return env->NewStringUTF(rt->toText().c_str());
}    

jobject
Java_org_vamp_1plugins_RealTime_fromSeconds(JNIEnv *env, jclass cls, jdouble s)
{
    jclass rtClass = env->FindClass("org/vamp_plugins/RealTime");
    jmethodID rtCtor = env->GetMethodID(rtClass, "<init>", "(II)V");
    RealTime rt = RealTime::fromSeconds(s);
    return env->NewObject(rtClass, rtCtor, rt.sec, rt.nsec);
}

jobject Java_org_vamp_1plugins_RealTime_fromMilliseconds(JNIEnv *env, jclass cls, jint ms)
{
    jclass rtClass = env->FindClass("org/vamp_plugins/RealTime");
    jmethodID rtCtor = env->GetMethodID(rtClass, "<init>", "(II)V");
    RealTime rt = RealTime::fromMilliseconds(ms);
    return env->NewObject(rtClass, rtCtor, rt.sec, rt.nsec);
}

jobject Java_org_vamp_1plugins_RealTime_frame2RealTime(JNIEnv *env, jclass cls, jlong frame, jint sampleRate)
{
    jclass rtClass = env->FindClass("org/vamp_plugins/RealTime");
    jmethodID rtCtor = env->GetMethodID(rtClass, "<init>", "(II)V");
    RealTime rt = RealTime::frame2RealTime(frame, sampleRate);
    return env->NewObject(rtClass, rtCtor, rt.sec, rt.nsec);
}

jlong Java_org_vamp_1plugins_RealTime_realTime2Frame(JNIEnv *env, jclass cls, jobject obj, jint sampleRate)
{
    RealTime *rt = getHandle<RealTime>(env, obj);
    return RealTime::realTime2Frame(*rt, sampleRate);
}

void Java_org_vamp_1plugins_RealTime_initialise(JNIEnv *env, jobject obj, jint sec, jint nsec)
{
    RealTime *rt = new RealTime(sec, nsec);
    setHandle(env, obj, rt);
}


