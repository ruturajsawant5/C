#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int n; 

    printf("Enter n:"); 
    scanf("%d", &n); 

    if(n % 2 == 0)
    {
        printf("%d is an even number\n", n); 
    }
    else 
    {
        printf("%d is an odd number\n", n); 
    }

    exit(0); 
}