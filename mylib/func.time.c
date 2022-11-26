#include <time.h>
#include <stdio.h>

double getDuration (long long int fibFunction(int), int parameter){
    int start = clock();
    fibFunction(parameter);
    int end = clock();
    return (double)(end-start)/CLOCKS_PER_SEC;
}

double getDurationWithLoop (long long int fibFunction(int), int parameter){
    int start = clock();
    
    for(int i = 0; i < parameter; i++){
        fibFunction(i);
    }
    int end = clock();
    return (double)(end-start)/CLOCKS_PER_SEC;
}