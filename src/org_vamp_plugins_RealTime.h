/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_vamp_plugins_RealTime */

#ifndef _Included_org_vamp_plugins_RealTime
#define _Included_org_vamp_plugins_RealTime
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    sec
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_vamp_1plugins_RealTime_sec
  (JNIEnv *, jobject);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    nsec
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_vamp_1plugins_RealTime_nsec
  (JNIEnv *, jobject);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    usec
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_vamp_1plugins_RealTime_usec
  (JNIEnv *, jobject);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    msec
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_vamp_1plugins_RealTime_msec
  (JNIEnv *, jobject);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    toString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_vamp_1plugins_RealTime_toString
  (JNIEnv *, jobject);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    toText
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_vamp_1plugins_RealTime_toText
  (JNIEnv *, jobject);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    fromSeconds
 * Signature: (D)Lorg/vamp_plugins/RealTime;
 */
JNIEXPORT jobject JNICALL Java_org_vamp_1plugins_RealTime_fromSeconds
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    fromMilliseconds
 * Signature: (I)Lorg/vamp_plugins/RealTime;
 */
JNIEXPORT jobject JNICALL Java_org_vamp_1plugins_RealTime_fromMilliseconds
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    frame2RealTime
 * Signature: (JI)Lorg/vamp_plugins/RealTime;
 */
JNIEXPORT jobject JNICALL Java_org_vamp_1plugins_RealTime_frame2RealTime
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    realTime2Frame
 * Signature: (Lorg/vamp_plugins/RealTime;I)J
 */
JNIEXPORT jlong JNICALL Java_org_vamp_1plugins_RealTime_realTime2Frame
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_vamp_plugins_RealTime
 * Method:    initialise
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_vamp_1plugins_RealTime_initialise
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
