#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int number_1, number_2; 
    int summation; 

    printf("Enter number 1 of 2:"); 
    scanf("%d", &number_1); 

    printf("Enter number 2 of 2:"); 
    scanf("%d", &number_2); 

    summation = number_1 + number_2; 
    printf("%d + %d == %d\n", number_1, number_2, summation); 

    exit(0); 
}