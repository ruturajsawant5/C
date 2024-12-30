#define NULL ((void*)0)
typedef unsigned long long int size_t; 

void* malloc(size_t size_in_bytes); 

void* calloc(size_t number_of_elements, size_t size_per_element); 


void* cpa_calloc(size_t number_of_elements, size_t size_per_element)
{
    void* p = NULL; 

    p = malloc(number_of_elements * size_per_element); 
    if(p != NULL)
        memset(p, 0, number_of_elements * size_per_element); 

    return (p); 
}

malloc(sizeof(int)); 
malloc(sizeof(struct Date)); 

int* p = calloc(1, sizeof(int)); 
struct Date* pDate = calloc(1, sizeof(struct Date)); 

T* p = malloc(sizeof(T)); 

T* p = calloc(1, sizeof(T)); 