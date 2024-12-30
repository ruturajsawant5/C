#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
    int* p; 
    int m; 

    p = (int*)malloc(sizeof(int)); 
    if(p == 0)
    {
        puts("Error in allocating integer"); 
        exit(-1); 
    }

    *p = 200; 
    m = *p; 
    printf("m = %d\n", m); 

    free(p); 
    p = 0; 

    return (0); 
}

/* 

    void* malloc(unsigned long long int); 

    malloc(16); 

    [   ][  ][  ][  ]
    [       ][      ]
    [][][][][][][][]

    struct 

    void 
   
*/
0000 0001 0000 0001 0000 0001 0000 0001 