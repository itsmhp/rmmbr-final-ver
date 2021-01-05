#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jint JNICALL
Java_id_ac_ui_cs_mobileprogramming_muhammadhanifpratama_rmmbr_MainActivity_milliToSecond(
        JNIEnv *env, jobject thiz, jint millis) {
    return (millis/1000)%60;
}

extern "C"
JNIEXPORT jint JNICALL
Java_id_ac_ui_cs_mobileprogramming_muhammadhanifpratama_rmmbr_MainActivity_milliToMinute(
        JNIEnv *env, jobject thiz, jint millis) {
    return (millis/60000)%60;
}

extern "C"
JNIEXPORT jint JNICALL
Java_id_ac_ui_cs_mobileprogramming_muhammadhanifpratama_rmmbr_MainActivity_milliToHour(JNIEnv *env,
                                                                                       jobject thiz,
                                                                                       jint millis) {
    return (millis/3600000);
}