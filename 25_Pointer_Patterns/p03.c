#include <stdio.h> 
#include <stdlib.h> 

void get_array(int** pp_arr, int* pN); 
void fill_array(int* p_arr, int N); 
void show_array(int* p_arr, int N); 
void release_array(int** pp_arr); 

int main(void)
{
    int* p_arr = 0; 
    int N = -1; 

    get_array(&p_arr, &N); 
    fill_array(p_arr, N); 
    show_array(p_arr, N); 
    release_array(&p_arr); 
    
    return (0); 
}

void get_array(int** pp_arr, int* pN)
{
    int* p_arr = 0; 
    int N = -1; 

    printf("Enter size of array:"); 
    scanf("%d", &N); 

    if(N <= 0)
    {
        puts("Array size must be positive"); 
        exit(-1); 
    }

    p_arr = (int*)malloc(N * sizeof(int)); 
    if(p_arr == 0)
    {
        puts("Error in allocating memory"); 
        exit(-1); 
    }

    *pp_arr = p_arr; 
    *pN = N; 
}

void fill_array(int* p_arr, int N)
{
    int i; 

    for(i = 0; i < N; ++i)
        p_arr[i] = (i+1) * 100; 
} 

void show_array(int* p_arr, int N)
{
    int i; 

    for(i = 0; i < N; ++i)
        printf("p_arr[%d]:%d\n", i, p_arr[i]); 
}

void release_array(int** pp_arr)
{
    free(*pp_arr); 
    *pp_arr = 0; 
}

// WIN 32 -> CALLING CONVENTION : standard calling, C calling convention, fast call convention
// WIN 32 -> CALLBACK FUNCTION 
// local static keyword

// array of structure 
// array of integer pointer -> dynamically allocate, integers dynamically allocate 
// array of structure pointer -> dynamically allocate, structure dynamically 


