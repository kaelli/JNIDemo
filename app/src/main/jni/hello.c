/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
/* Header for class com_example_aplex_jnidemo_JniNative */

#ifndef _Included_com_example_aplex_jnidemo_JniNative
#define _Included_com_example_aplex_jnidemo_JniNative

#include "android/log.h"
#include "string.h"
static const char *TAG="JNIDEMO";
#define LOGE(fmt, args...) __android_log_vprint(ANDROID_LOG_ERROR, TAG, fmt, ##args)

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_aplex_jnidemo_JniNative
 * Method:    sayHelloToC
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_aplex_jnidemo_JniNative_sayHelloToC
        (JNIEnv * env, jclass clazz,jstring hellostring){
        char* pStr = NULL;

        jclass     jstrObj   = (*env)->FindClass(env, "java/lang/String");
        jstring    encode    = (*env)->NewStringUTF(env, "utf-8");
        jmethodID  methodId  = (*env)->GetMethodID(env, jstrObj, "getBytes", "(Ljava/lang/String;)[B");
        jbyteArray byteArray = (jbyteArray)(*env)->CallObjectMethod(env, hellostring, methodId, encode);
        jsize      strLen    = (*env)->GetArrayLength(env, byteArray);
        jbyte      *jBuf     = (*env)->GetByteArrayElements(env, byteArray, JNI_FALSE);
        if (jBuf > 0)
        {
                pStr = (char*)malloc(strLen + 1);

                if (!pStr)
                {
                        return;
                }
                memcpy(pStr, jBuf, strLen);

                pStr[strLen] = 0;
        }
        LOGE("%s",pStr);
        (*env)->ReleaseByteArrayElements(env, byteArray, jBuf, 0);

}

/*
 * Class:     com_example_aplex_jnidemo_JniNative
 * Method:    HelloFromC
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_aplex_jnidemo_JniNative_HelloFromC
        (JNIEnv * env, jclass clazz){
        char * hello = "hello";
        return  (*env)->NewStringUTF(env,hello);
}

#ifdef __cplusplus
}
#endif
#endif
