#include <stdio.h> 
#include <stdlib.h> 

void test_1(int m); 
void test_2(int* p); 

int main(void) 
{
    int n; 

    n = 100; 

    printf("main():VALUE(n)=%d, ADDRESS_OF_n=%p\n", n, &n); 
    printf("main():Before call to test_1():n=%d\n", n); 
    test_1(n);  /* Pass by Value */
    printf("main():After call to test_1():n=%d\n", n); 

    printf("main():Before call to test_2():n=%d, ADDR(n)=%p\n", 
            n, &n); 
    test_2(&n); /* Pass by reference */
    printf("main():After call to test_2():n=%d\n", n); 

    return (0); 
}

void test_1(int m)
{
    printf("test_1():VALUE(m)=%d, ADDRESS_OF_m=%p\n", m, &m); 
    m = 500; 
    printf("test_1():While returning m = %d\n", m); 
}

void test_2(int* p)
{
    printf("test_2():ADDRESS IN p = %p\n", p); 
    *p = 1000; 
}