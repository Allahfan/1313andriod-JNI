#include <jni.h>
#include <string>
#include <encmain.c>
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_a19785_kvazaar_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
