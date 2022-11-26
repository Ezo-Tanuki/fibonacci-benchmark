# Fibonacci-benchmark
This repository contains my fibonacci implementation in c using both iterative method and recursive method

## Fibbonaci sequence
Fibonacci sequence starts with 2 number: 0 and 1, to find the next number you can simply add the sum of the two previous number, so to find the third number of the fibonacci sequence you can simply add up the two previous number which is 0 and 1, then you will get the value 1 and the sequence continues. Using the Definition above we get the formula for fibonacchi sequence:
<br>
<br>
$F(0) = 0,\hspace{0.3cm}F(1) = 1,\hspace{0.3cm}F(n) = F(n-1) + F(n-2),$ for n > 1 (1)
<br>

## Implementation

### Iterative
The way iterative work is by start with two variables that contains $F(0)$ and $F(1)$. You can see from my code in [mylib/mylib.c](mylib/mylib.c), there is two variable ```output``` and ```tmp```, each assigned to the value $F(1) = 1$ and $F(0) = 0$ respectively. The next step is to calculate $F(2)=F(1)+F(0)$ and re-assign it to the ```output``` variable. At this point ```output``` holds the value of $F(2)$, however to calculate the next sequence [$F(3)$] we need the value of $F(1)$. In order to solve the problem we can see from the formula (1) by inserting n = 2, we get:

$$F(2) = F(1) + F(0),$$
<center>we can change the formula into:</center>

$$F(1) = F(2) - F(0)$$
now we calculate $F(1)$ using the formula above and re-assign it into the ```tmp``` variable. Now we can calculate $F(3)$ and we keep doing it to find the next sequence. Below is the snippet for the algorithm

```c
int output = 1, tmp = 0;

for(unsigned int i = 2; i < n+1; i++){

    output += tmp;
    tmp = output - tmp;
}

return output;
```