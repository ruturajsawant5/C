#include <stdio.h> 
#include <stdlib.h> 

#define N 8 

void test_1(void); 
void test_2(void); 

int main(void)
{
    test_1(); 
    test_2(); 
    return (EXIT_SUCCESS); 
}

void test_1(void)
{
    int j; 

    puts("Pairing of zero with all j between 0 to 8-1 using while"); 
    j = 0; 
    while(j < N)
    {
        printf("(0, %d)\n", j); 
        j = j + 1; 
    }

    puts("Pairing of zero with all j between 0 to 8-1 using for"); 
    for(j = 0; j < N; ++j)
        printf("(0, %d)\n", j); 
}

void test_2(void)
{
    int i, j; 

    puts("while:Pairing all i's from 0 to 8-1 with all j's between 0 to 8-1"); 
    i = 0; 
    while(i < N)
    {
        j = 0; 
        while(j < N)
        {
            printf("(%d,%d)\n", i, j); 
            j = j + 1; 
        }
        i = i + 1; 
    }

    puts("for:Pairing all i's from 0 to 8-1 with all j's between 0 to 8-1"); 
    for(i=0; i < N; ++i)
    {
        for(j=0; j < N; ++j)
        {
            printf("(%d,%d)\n", i, j); 
        }
    }

    /* 
        for(i=0; i < N; ++i)
            for(j=0; j < N; ++j)
                printf("(%d,%d)\n", i, j); 
    */

}