#include <stdio.h> 
#include <stdlib.h> 

int f1(int, int); 
double f2(int, int, int); 
int f3(int); 

int g1(int); 
double g2(int); 
double g3(double); 

int main(void)
{
    int ret_1; // 4 
    double ret_2; // 8

    ret_1 = f1(10, 20); // call to f1() 
    // after returning from f1() ret_1 will be 4 
    
    ret_2 = g1(100); // call g1() 
    // ret_2 is 1000.0 afte returning from g1() 

    printf("ret_1 = %d, ret_2 = %lf\n", ret_1, ret_2); 
    return (0); 
}

int f1(int m, int n)
{
    // m == 10, n == 20
    int result; 
    double rs;

    result = m + n; // result == 30 
    printf("result = %d\n", result); 
    rs = f2(1, 4, 8); // call to f2(), 
    // afte returning from r2() rs is 4.0
    printf("rs = %lf\n", rs); 
    return (rs); // return 4.0
}

double f2(int a, int b, int c)
{
    // a == 1, b == 4, c==8
    
    double mean; 
    int x; 

    mean = (a + b + c)/3; // mean == 4.0
    x = f3(40); // call to f3() 
    // x will be 1600, after return from f3()
    printf("f2():mean = %lf, x = %d\n", mean, x); 
    return (mean); // return mean 
}

int f3(int n)
{
    // n == 40
    return n * n; // return 1600
}

int g1(int a)
{
    // a == 100
    double rs; 
    rs = g2(5); // call g2()
    // rs == 0.0 afater returning from g2()   
    printf("rs = %lf\n", rs); 
    return a * 10; 
}

double g2(int n)
{
    // n == 5
    double x; 
    x = g3(3.3); // call g3()  
    // x will be set to 6.6 after g3() returns 
    printf("x = %lf\n", x); // x = 6.6 
    return n /10; // return 0.0 
}

double g3(double x)
{
    // x == 3.3 

    printf("x = %lf\n", x); 
    return x * 2.0; // return 6.6 to caller 
}