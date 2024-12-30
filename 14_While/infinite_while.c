#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
    while(1)
    {
        printf("Forever...\n"); 
    }

    printf("Done\n"); /* Control flow will never reach here */
    return (0); 
}