#include <stdio.h>
#include "mylib/mylib.h"
#include "mylib/func.time.h"

int main(void){
    int parameter = 32;
    
    printf("parameter: %d\n", parameter);
    printf("time: %fs\n", getDurationWithLoop(fibbonaciRecursiveOptimized, parameter));
    
    return 0;
}