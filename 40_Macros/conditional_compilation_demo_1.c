#include <stdio.h> 
#include <stdlib.h> 

#define X 

int main(void)
{
    int n;

    #ifdef X  
        puts("START"); 
    #endif

    printf("Enter n:"); 
    scanf("%d", &n); 

    if(n > 0)
        puts("n is positive"); 
    else if(n < 0)
        puts("n is negative"); 
    else 
        puts("n is zero"); 

    #ifdef X 
        puts("END"); 
    #endif 

    return (0); 
}