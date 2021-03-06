/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tls_sigcheck_tls_sigcheck */

#ifndef _Included_com_tls_sigcheck_tls_sigcheck
#define _Included_com_tls_sigcheck_tls_sigcheck
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tls_sigcheck_tls_sigcheck
 * Method:    tls_gen_signature_ex
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_tls_sigcheck_tls_1sigcheck_tls_1gen_1signature_1ex
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_tls_sigcheck_tls_sigcheck
 * Method:    tls_gen_signature_ex2
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_tls_sigcheck_tls_1sigcheck_tls_1gen_1signature_1ex2
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     com_tls_sigcheck_tls_sigcheck
 * Method:    tls_gen_signature_ex2_with_expire
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_tls_sigcheck_tls_1sigcheck_tls_1gen_1signature_1ex2_1with_1expire
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring);

/*
 * Class:     com_tls_sigcheck_tls_sigcheck
 * Method:    tls_check_signature_ex
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_tls_sigcheck_tls_1sigcheck_tls_1check_1signature_1ex
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_tls_sigcheck_tls_sigcheck
 * Method:    tls_check_signature_ex2
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_tls_sigcheck_tls_1sigcheck_tls_1check_1signature_1ex2
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
