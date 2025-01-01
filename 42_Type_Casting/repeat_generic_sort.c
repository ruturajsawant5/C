#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void cpa_sort(void* arr, int N, int nmem, int(*compare)(const void*, const void*))
{
    int i, j; 
    void* key = NULL; 

    key = malloc(nmem); 
    if(key == NULL)
    {
        puts("error in allocating memory"); 
        exit(EXIT_FAILURE); 
    }

    for(j = 1; j < N; ++j)
    {
        memcpy(
            key, 
            (char*)arr + j * nmem, 
            nmem
        ); 
        i = j - 1; 

        while(i > -1 && compare((char*)arr + i * nmem, key) > 0)
        {
            memcpy(
                (char*)arr + (i+1) * nmem, 
                (char*)arr + i * nmem, 
                nmem
            ); 
            i = i - 1; 
        }

        memcpy(
            (char*)arr + (i+1)*nmem, 
            key, 
            nmem
        ); 
    }

    free(key); 
    key = NULL; 
}

void cpa_sort(void* arr, int N, int nmem, int(*compare)(const void*, const void*))
{
    int i, j; 
    void* key = NULL; 

    key = malloc(nmem); 
    if(key == NULL)
    {
        puts("Error in memory allocation"); 
        exit(EXIT_FAILURE); 
    }

    for(j = 1; j < N; ++j)
    {
        memcpy(key, (char*)arr + j * nmem, nmem); 
        i = j - 1; 
        while(i > -1 && compare((char*)arr + i*nmem, key) > 0)
        {
            memcpy((char*)arr+(i+1)*nmem, (char*)arr+i*nmem, nmem); 
            i = i - 1; 
        }

        memcpy((char*)arr+(i+1)*nmem, key, nmem); 
    }

    free(key); 
    key = NULL; 
}

void cpa_sort(void* arr, int N, int nmem, int(*compare)(const void*, const void*))
{
    int i, j; 
    void* key = NULL; 

    key = malloc(nmem); 
    if(key == NULL)
    {
        puts("error in allocating memory"); 
        exit(EXIT_FAILURE); 
    }

    for(j = 1; j < N; ++j)
    {
        memcpy(key, (char*)arr + j * nmem, nmem); 
        i = j - 1; 
        while(i > -1 && compare((char*)arr + i*nmem, key) > 0)
        {
            memcpy((char*)arr + (i+1)*nmem, (char*)arr + i*nmem, nmem); 
            i = i - 1; 
        }
        memcpy((char*)arr+(i+1)*nmem, key, nmem); 
    }

    free(key); 
    key = NULL; 
}

void f(int* restrict ptr)
{

}

int printf(const char* restrict fmt, ...)
{

}

//  void memcpy(void* dest, const void* src, size_t nbytes); 
//  void* memcpy(void* restrict dest, const void* restrict src, size_t nbytes); 
//  24 -> 36, 36 --> 48 
//  1.5 to 2 --> 24 
//  fresher JOB: background: 4 : 24 

// Object Oriented C : Alex Tobius Schreiner 

// Understanding and Using C Pointers. 