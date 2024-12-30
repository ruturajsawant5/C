

/* 
    Solution: 
        Let A[k] be any arbitrary element in array. 

        A[k] <- k*k if k is even i.e k%2 == 0 
        A[k] <- k*k*k if k is odd i.e. k%2 == 1 

        Repeat this for all elements in array. 
*/

#include <stdio.h> 
#include <stdlib.h> 

#define N 10 

int main(void)
{
    int A[N];   /* A is array 10 of integers */
    int k;      /* k is an index variable */

    for(k=0; k < N; ++k)
    {
        if(k%2 == 0)
        {
            A[k] = k*k; 
        }
        else if(k%2 == 1)
        {
            A[k] = k*k*k; 
        }
    }

    /* Show array */
    for(k=0; k < N; ++k)
        printf("A[%d]:%d\n", k, A[k]); 

    return (EXIT_SUCCESS); 
}

/* 
    for(k=0; k < N; ++k)
        if(k%2 == 0)
            A[k] = k*k; 
        else if(k%2 == 1)
            A[k] = k*k*k; 
*/