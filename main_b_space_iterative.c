#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int parameter = 100000;

    printf("press Ctrl + C to interrupt the process\n");
    printf("parameter: %d\n", parameter);

    while(1){
        fibonacciIterative(parameter);
    }
    
    return 0;
}