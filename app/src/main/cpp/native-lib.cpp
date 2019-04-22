#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_wd_tech_jni_1ndk_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello";
    return env->NewStringUTF(hello.c_str());
}
