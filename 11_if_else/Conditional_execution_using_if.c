

#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int n; 

    printf("Start of program\n"); 
    printf("Enter n:"); 
    scanf("%d", &n); 
    if(n > 0)
    {
        printf("%d is a positive number\n", n); 
    }
    printf("End of program\n"); 
    exit(0); 
}