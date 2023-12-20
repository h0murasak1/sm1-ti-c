#include "stdio.h"
#include "stdlib.h"

#ifndef SDK_DEFINED
#define SDK_DEFINED

typedef struct{
    int isi;
    int status;
}sdk;

#endif


sdk Sodoku[4][4];
int isOK;//Bernilai 0 jika salah, dan 1 jika benar

//void SodokuGame