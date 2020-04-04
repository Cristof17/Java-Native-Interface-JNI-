#include "unu_doi_trei_Main.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_unu_doi_trei_Main_print(JNIEnv *env, jobject this){
     fprintf(stdout, "hello");
}
