//
// Created by Jaswinder wadali on 04/09/16.
//

#include "jni.h"
#include "add.h"


extern "C" {
JNIEXPORT jstring JNICALL Java_com_jaswinder_wadali_HelloJni_jas(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_com_jaswinder_wadali_HelloJni_sum(JNIEnv *, jobject, jint, jint);

}


JNIEXPORT jstring JNICALL Java_com_jaswinder_wadali_HelloJni_jas(JNIEnv *env, jobject jobject1) {
    return (env)->NewStringUTF("Hello from JNI !");

}


JNIEXPORT jint JNICALL Java_com_jaswinder_wadali_HelloJni_sum(JNIEnv *env, jobject jobject1, jint a, jint b) {
    return hello(a, b);
}

