#include <stdio.h> 
#include <stdlib.h> 

#define NUMBER_OF_REPETATIONS 10 

int main(void)
{
    int i; 
    int num; 
   
    i = 0; 
    while(i < NUMBER_OF_REPETATIONS)
    {
        printf("Enter a number:"); 
        scanf("%d", &num);
        printf("Entered number = %d\n", num); 

        if(num % 7 == 0)
        {
            break; 
        }
        
        i = i + 1; 
    }

    puts("Exit"); 

    return (0); 
}