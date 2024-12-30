#include <stdio.h> 

void f1(char* p); 
void f2(unsigned char* p); 

void f3(short* p); 
void f4(unsigned short* p); 

void f5(int* p); 
void f6(unsigned int* p); 

void f7(long* p); 
void f8(unsigned long* p); 

void f9(long long* p); 
void f10(unsigned long long* p);  

void f11(float* p); 
void f12(double* p); 

int main(void)
{
    char c = 'A'; 
    unsigned char uc1 = 100; 

    short sn = -200; 
    unsigned short usn = 500; 

    int n = -345345; 
    unsigned int un = 235365; 

    long lng_n = -3453535; 
    unsigned long u_lng_n = 34536; 

    long long lng_lng_n = -3536525;
    unsigned long long u_lng_lng_n = 253525; 

    float flt_1 = -3.1415; 
    double d1 = 3.4567962; 

    puts("BEFORE CALLS TO FUNCTION"); 
    printf("c=%c, uc1=%hhu, sn=%hd, usn=%hu, n=%d, un=%u, lng_n=%ld, u_lng_n=%lu\n", 
            c, uc1, sn, usn, n, un, lng_n, u_lng_n); 
    printf("lng_lng_n=%lld, u_lng_lng_n=%llu, flt_1=%f, d1=%lf\n", 
        lng_lng_n, u_lng_lng_n, flt_1, d1); 

    f1(&c); 
    f2(&uc1); 
    f3(&sn); 
    f4(&usn); 
    f5(&n); 
    f6(&un); 
    f7(&lng_n); 
    f8(&u_lng_n); 
    f9(&lng_lng_n); 
    f10(&u_lng_lng_n); 
    f11(&flt_1); 
    f12(&d1); 

    puts("AFTER CALLS TO FUNCTION"); 
    printf("c=%c, uc1=%hhu, sn=%hd, usn=%hu, n=%d, un=%u, lng_n=%ld, u_lng_n=%lu\n", 
            c, uc1, sn, usn, n, un, lng_n, u_lng_n); 
    printf("lng_lng_n=%lld, u_lng_lng_n=%llu, flt_1=%f, d1=%lf\n", 
        lng_lng_n, u_lng_lng_n, flt_1, d1); 

    return (0); 
}


void f1(char* p)
{
    *p = 'Z'; 
}

void f2(unsigned char* p)
{
    *p = 391; 
}

void f3(short* p)
{
    *p = 15321; 
}

void f4(unsigned short* p)
{
    *p = 40123; 
}

void f5(int* p)
{
    *p = 36345325; 
} 

void f6(unsigned int* p)
{
    *p = 93463532; 
}

void f7(long* p)
{
    *p = -63537425; 
}

void f8(unsigned long* p)
{
    *p = 734234535; 
}

void f9(long long* p)
{
    *p = -86356325; 
}

void f10(unsigned long long* p)
{
    *p = 385362425; 
}

void f11(float* p)
{
    *p = 36346.2252; 
}

void f12(double* p)
{
    *p = 3532453.635325; 
}