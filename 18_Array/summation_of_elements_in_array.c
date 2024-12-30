/* 
    @goal:  To define array 10 elements. 
            Accept elements in array from standard input device. 
            Compute the summation of all elements in the array. 
            Display the result on standard output device. 
*/

#include <stdio.h> 
#include <stdlib.h> 

#define N 10 

int main(void)
{
    int A[N];   /* A is array 10 of integers */
    int i;  /* i is a loop variable / index variable */

    /* Accept elements in array from standard input device */
    for(i=0; i < N; ++i)
    {
        printf("Please enter element at index %d:", i); 
        scanf("%d", &A[i]); 
    }

    /*  Display input array on standard output device */
    for(i=0; i < N; ++i)
        printf("A[%d]:%d\n", i, A[i]); 


    return (EXIT_SUCCESS); 
}