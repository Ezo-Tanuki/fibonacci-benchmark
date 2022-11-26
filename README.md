# Fibonacci-benchmark
This repository contains my fibonacci implementation in c using both iterative method and recursive method

## Fibonacci sequence
Fibonacci sequence starts with 2 number: 0 and 1, to find the next number you can simply add the sum of the two previous number, so to find the third number of the fibonacci sequence you can simply add up the two previous number which is 0 and 1, then you will get the value 1 and the sequence continues. Using the Definition above we get the formula for fibonacchi sequence:
<br>
<br>
$F(0) = 0,\hspace{0.3cm}F(1) = 1,\hspace{0.3cm}F(n) = F(n-1) + F(n-2),$ for n > 1 (1)
<br>

## Implementation

### Iterative
The way iterative work is by start with two variables that contains $F(0)$ and $F(1)$. You can see from my code in [mylib/mylib.c](mylib/mylib.c), there is two variable `output` and `tmp`, each assigned to the value $F(1) = 1$ and $F(0) = 0$ respectively. The next step is to calculate $F(2)=F(1)+F(0)$ and re-assign it to the `output` variable. At this point `output` holds the value of $F(2)$, however to calculate the next sequence $F(3)$ we need the value of $F(1)$. In order to solve the problem we can see from the formula (1) by inserting n = 2, we get:

$$F(2) = F(1) + F(0),$$
we can change the formula into:

$$F(1) = F(2) - F(0)$$
now we calculate $F(1)$ using the formula above and re-assign it into the `tmp` variable. Now we can calculate $F(3)$ and we keep doing it to find the next sequence. Below is the snippet for the algorithm:

```c
int fibonacciIterative(int n){
    if (n == 0) return 0; // F(0) = 0
    if (n == 1) return 1; // F(1) = 1
    int output = 1, tmp = 0; // output = F(1), tmp = F(0)

    for(unsigned int i = 2; i < n+1; i++){
        output += tmp; // F(N) = F(N-1) + F(N-2)
        tmp = output - tmp; // F(N-1) = F(N) - F(N-2)

    }

    return output;
}
```
### Recursive
The implementation of fibonacci using the recursive method is more straightforward than iterative method, below is the function that returns the value $F(n)$:

```c
int fibonacciRecursive(int n){
    if (n == 0) return 0; // F(0) = 0
    if (n == 1) return 1; // F(1) = 1

    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}
```

There is a drawback however, that is the time complexity grows exponentially as `n` gets higher, the reason why is has higher time complexity compared to iterative method is because for some input it got called multiple times for instance take `n` = 5.

$$F(5) = F(4) + F(3)$$

$$F(5) = F(3) + F(2) + F(2) + F(1)$$

$$F(5) = F(2) + F(1) + F(1) + F(0) + F(1) + F(0) + F(1)$$

$$F(5) = F(1) + F(0) + 4F(1) + 2F(0)$$

$$F(5) = 5F(1) + 3F(0)$$

As you can see from the equation above, to calculate $F(5)$ you will need to call $F(1)$ and $F(0)$ multiple times. This unnecessary calls will increase the time it took to calculate the sequence as the size getting bigger.

### Solution
The solution to the problem above is just to make an array that stores the value of $F(n)$ in $n-1$ nth index of the array

```c
int memo[50] = {0}; // You can choose any size and set all value to 0 

int fibonacciRecursive(int n){
    if (n == 0) return 0; // F(0) = 0
    if (n == 1) return 1; // F(1) = 1
    if (memo[n] != 0) return memo[n]; // If the value has been stored, return it

    return memo[n] = fibonacciRecursive(n-1) + fibonacciRecursive(n-2); // Calculate the value and store it in the memo array
}
```
Now with some optimization the code should be running pretty fast, the cons  however it takes a lot more memory to store the value.
