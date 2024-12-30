
#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int i_arr[8];   /* Define an array of 8 elements */
    int k;          /* Define a loop varaible */

    k = 0; 
    while(k < 8)
    {
        i_arr[k] = k * k; 
        ++k; 
    }

    /* Display the array: 
        In order to solve the question of displaying the all 
        elements of array, we must first figure out how to 
        display ANY ARBITRARY element in array. 

        Let i_arr[k] be any arbitrary element in array. 
        To display it along with its index, the following printf() 
        statement will work. 

        printf("i_arr[%d]:%d\n", k, i_arr[k]); 

        Now this statement must be repeated for all values of k 
        from 0 to 7. 

        Therefore, 

        k = 0; 
        while(k < 8)
        {
            printf("i_arr[%d]:%d\n", k, i_arr[k]); 
            ++k; 
        }

        will work

    */

    k = 0; 
    while(k < 8)
    {
        printf("i_arr[%d]:%d\n", k, i_arr[k]); 
        ++k; 
    }

    return (0); 
}