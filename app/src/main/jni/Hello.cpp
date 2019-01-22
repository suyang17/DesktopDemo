#include "com_szboanda_mobile_desktopdemo_Hello.h"

JNIEXPORT jstring JNICALL Java_com_szboanda_mobile_desktopdemo_Hello_sayHello
  (JNIEnv * env, jclass jclass1){
    return env->NewStringUTF("from C");
  }
