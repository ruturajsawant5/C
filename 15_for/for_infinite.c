#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
    for(;;)
    {
        printf("FOR : Forever...\n"); 
    }

    printf("We are never ever ever coming here!\n"); /* Control flow will never reach here */
    return (0); 
}