

#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int n1 = 100; 
    int n2 = 200; 
    int sum, sub, mul, quotient, remainder; 

    sum = n1 + n2; 
    printf("sum = %d\n", sum); 
    sub = n2 - n1; 
    printf("sub = %d\n", sub); 
    mul = n1 * n2; 
    printf("mul = %d\n", mul); 
    quotient = n2 / n1; 
    printf("quotient = %d\n", quotient); 
    remainder = n2 % n1; 
    printf("remainder = %d\n", remainder); 

    exit(0); 
}