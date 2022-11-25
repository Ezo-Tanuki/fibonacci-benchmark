 long long int CalculateFibRecursive(int input, long long int fibmem[]){
    
    if (input>89) return CalculateFibRecursive(input-1, fibmem) + CalculateFibRecursive(input-2, fibmem);

    if (input<=0) return 0;
    if (input==1) return 1;

    if (fibmem[input]!=0) return fibmem[input];
    
    fibmem[input] = CalculateFibRecursive(input-1, fibmem) + CalculateFibRecursive(input-2, fibmem);
    return fibmem[input];
}

long long int fibbonaciRecursiveOptimized(int input){
    long long int fibmem[90] = {0};

    return CalculateFibRecursive(input, fibmem);
}

long long int fibbonaciRecursive(int input){
    
    if (input<=0) return 0;
    if (input==1) return 1;

    return fibbonaciRecursive(input-1) + fibbonaciRecursive(input-2);
}

long long int fibbonaciIterative(int input){
    if (input<=0) return 0;
    if (input==1) return 1;

    long long int output = 1, tmp = 0;

    for (int i = 2; i < input+1; i++)
    {
        output +=tmp;
        tmp = output-tmp; 
    }
    return output;
}