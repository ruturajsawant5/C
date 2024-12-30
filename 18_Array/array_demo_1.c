#include <stdio.h> 
#include <stdlib.h> 

/* Define an array of five integers */
int i_arr[5]; 

/*  As seen in Session #41, every integer in array 
    has a serial number known as the index of array, 
    and for reasons explained in Session #41, we start 
    indexing from 0 
    
    General Result: 
        Let A be array of any data type whose length is N. 
        Starting Index = 0 
        Last valid index = N-1
        Valid index range is from 0 to N-1 

    Our specific case. 
        We have an array of integer whose length is 5. 
        starting index = 0 
        Last valid index = length - 1 = 5 - 1 = 4 
        Valid index range is from 0 to 4. 

    How to access element in array whose index is i. 

    The expression array_name[i] takes us to element at index i. 
    To modify data of element with index i, we write, 

    array_name[i] = RHS; 

    To read data from element with index i, we write, 
    LHS = array_name[i]; 
*/

int main(void)
{
    /* 
        0      1     2     3     4   
        [   0][   0][   0][   0][   0]
    */
    i_arr[0] = 100;      /* 
                            0      1     2     3     4   
                            [ 100][   0][   0][   0][   0]
                        */

    i_arr[1] = 200;     /* 
                            0      1     2     3     4   
                            [ 100][ 200][   0][   0][   0]
                        */

    i_arr[2] = 300;      /* 
                            0      1     2     3     4   
                            [ 100][ 200][  300][   0][   0]
                        */

    i_arr[3] = 400;     /* 
                            0      1     2     3     4   
                            [ 100][ 200][  300][  400][   0]
                        */

    i_arr[4] = 500;       /* 
                            0      1     2     3     4   
                            [ 100][ 200][  300][  400][ 500]
                        */

    printf("i_arr[%d]:%d\n", 0, i_arr[0]); 
    printf("i_arr[%d]:%d\n", 1, i_arr[1]); 
    printf("i_arr[%d]:%d\n", 2, i_arr[2]); 
    printf("i_arr[%d]:%d\n", 3, i_arr[3]); 
    printf("i_arr[%d]:%d\n", 4, i_arr[4]); 

    return (0); 
}
