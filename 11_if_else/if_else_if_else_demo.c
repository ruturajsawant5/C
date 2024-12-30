#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int n; 

    printf("Enter n:"); 
    scanf("%d", &n); 

    if(n > 0)
    {
        printf("%d is a positive number\n", n); 
    }
    else if(n < 0)
    {
        printf("%d is a negative number\n", n); 
    }
    else 
    {
        printf("%d is zero\n", n); 
    }

    exit(0); 
}