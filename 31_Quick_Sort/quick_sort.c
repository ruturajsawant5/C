#define _CRT_RAND_S 

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

#define CAP     20000001
#define N_MAX   10000001

void get_array(int** pp_arr, int* pN); 
void show(int* pA, int N, const char* msg); 
int partition(int* a, int p, int r); 
void quick_sort(int* a, int p, int r); 

int main(void)
{
    int* a = NULL; 
    int N = -1; 
    time_t t_start, t_end, t_delta; 

    get_array(&a, &N); 
    // show(a, N, "Before sort:"); 
    t_start = time(0); 
    quick_sort(a, 0, N-1);
    t_end = time(0); 
    t_delta = t_end - t_start; 
    //show(a, N, "After sort:"); 
    printf("Time required:%lld\n", t_delta); 

    free(a); 
    a = NULL; 

    return (EXIT_SUCCESS); 
}

void quick_sort(int* a, int p, int r)
{
    int q; 

    if(p < r)
    {
        q = partition(a, p, r); 
        quick_sort(a, p, q-1); 
        quick_sort(a, q+1, r); 
    }
}

int partition(int* a, int p, int r)
{
    int i, j, pivot, tmp; 

    pivot = a[r]; 
    i = p - 1; 
    for(j = p; j < r; ++j)
    {
        if(a[j] <= pivot)
        {
            i += 1; 
            tmp = a[i]; 
            a[i] = a[j]; 
            a[j] = tmp; 
        }
    }

    tmp = a[r]; 
    a[r] = a[i+1]; 
    a[i+1] = tmp; 

    return (i+1); 
}

void get_array(int** pp_arr, int* pN)
{
    int* pA = NULL; 
    int N; 
    unsigned int num; 
    int i; 

    printf("Enter N[Between 1-1,00,00,000]:"); 
    scanf("%d", &N); 

    if(N <= 0 || N > N_MAX)
    {
        printf("Size of array must be between 0 to %d\n", N_MAX); 
        exit(EXIT_FAILURE); 
    }

    pA = (int*)malloc(N * sizeof(int)); 
    if(pA == NULL)
    {
        puts("Error in allocating memory"); 
        exit(EXIT_FAILURE); 
    }

    for(i = 0; i < N; ++i)
    {
        rand_s(&num); 
        pA[i] = num % CAP; 
    }

    *pp_arr = pA; 
    *pN = N; 
}

void show(int* pA, int N, const char* msg)
{
    int i; 

    if(msg)
        puts(msg); 

    for(i = 0; i < N; ++i)
        printf("pA[%d]:%d\n", i, pA[i]); 
}
