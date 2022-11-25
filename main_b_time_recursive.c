#include <stdio.h>
#include "myutils/mylib.h"
#include "myutils/func.time.h"

int main(void){
    int parameter = 32;
    
    printf("parameter: %d\n", parameter);
    printf("time: %fs\n", getDurationWithLoop(fibbonaciRecursiveOptimized, parameter));
    
    return 0;
}