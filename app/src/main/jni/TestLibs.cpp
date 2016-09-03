//
// Created by CHEUNGRP on 9/3/16.
//

#include <jni.h>
#include "JniClass.h"

JNIEXPORT jstring JNICALL Java_com_rp_jni_1test_JniClass_getString
        (JNIEnv * env, jobject job, jstring str, jint i, jboolean b){

    return env->NewStringUTF("This is my first JNI demo!");
}

