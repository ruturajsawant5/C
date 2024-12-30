#include <stdio.h> 
#include <stdlib.h> 

#define N 8     /* Instead of using 8, use symbolic constant N*/

int main(void)
{
    int i_arr[N]; 
    int k; 

    /* 
        Whenever any branching looping block contains 
        only one statement in its body then its body 
        need not be enclosed in curly brackets instead 
        it can be put just below the header 
    */
    /* Set all elements in array to square of their index */
    for(k=0; k < N; ++k)
        i_arr[k] = k*k; 
    
    /* Display all elements in array */
    for(k=0; k < N; ++k)
        printf("i_arr[%d]:%d\n", k, i_arr[k]); 
    
    return (EXIT_SUCCESS); 
}