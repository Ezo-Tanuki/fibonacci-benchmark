#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int parameter = 32;
    
    printf("parameter: %d\n", parameter);

    for (unsigned int i = 0; i < parameter; i++){
        long long int Iter = fibonacciIterative(i);
        long long int Rec = fibonacciRecursiveOptimized(i);
        
        printf("FibIter(%d): %lld, FibRec(%d): %lld %s\n", i, Iter, i, Rec, Iter == Rec ? "True" : "False");
    }
    
    return 0;
}