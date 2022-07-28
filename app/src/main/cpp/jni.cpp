#include <jni.h>

// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("jni");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("jni")
//      }
//    }

#include "include/test.h"


#include <android/log.h>
#define  LOG_TAG    "JNI"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

extern "C"
JNIEXPORT void JNICALL
Java_com_claire_jni_Tool_test(JNIEnv *env, jclass clazz) {
    int a = fun2(1,3);
    LOGI("测试%d",a);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_claire_jni_Tool_testString(JNIEnv *env, jclass clazz, jstring str) {
    const char *input_cstr = env->GetStringUTFChars(str, NULL);
    LOGI("传入字符串%s",input_cstr);
    //使用完释放
    env->ReleaseStringUTFChars(str, input_cstr);
}