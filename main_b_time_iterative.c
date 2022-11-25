#include <stdio.h>
#include <time.h>
#include "myutils/mylib.h"
#include "myutils/func.time.h"

int main(void){
    int parameter = 32;
    
    printf("time: %fs\n", getDurationWithLoop(fibbonaciIterative, parameter));
    
    return 0;
}