int printf(const char*, ...); 
void exit(int); 
void test_printf(void); 

int num = 145; 

int main(void)
{
    printf("This is a start of a program\n"); 
    printf("The value inside variable num is %d \n", num); 
    test_printf(); 
    printf("This is the end of program\n"); 
    exit(0); 
}

void test_printf(void)
{
    /* signed and unsigned char */
    char c1 = 'T'; 
    char c2 = -34; 
    unsigned char c3 = 129; 
    
    /* signed and unsigned short */
    short int s_num = 23912; 
    unsigned short int us_num = 21982; 
    
    /* signed and unsigned int */
    int i_num = -549543; 
    unsigned int ui_num = 34285322; 
    
    /* signed and unsigned long */
    long int lng_num = 524535; 
    unsigned long int ulng_num = 2356; 
    
    /* signed and unsigned long long */
    long long int lng_lng_num = 3453265353; 
    unsigned long long int u_lng_lng_num = 2355256432; 
    
    /* float and double */
    float f_num = 3.6543576; 
    double d_num = 23536.36525252536; 

    /* char print*/
    printf("Character data:\n"); 
    printf("c1 = %c\n", c1); 

    /* signed integer print */
    printf("Signed integers in DECIMAL:\n"); 
    printf("c2 = %hhd\n", c2); 
    printf("s_num = %hd\n", s_num); 
    printf("i_num = %d\n", i_num); 
    printf("lng_num = %ld\n", lng_num); 
    printf("lng_lng_num = %lld\n", lng_lng_num); 

    /* unsigned integer print */
    printf("Unsigned integers in DECIMAL:\n"); 
    printf("c3 = %hhu\n", c3); 
    printf("us_num = %hu\n", us_num); 
    printf("ui_num = %u\n", ui_num); 
    printf("ulng_num = %lu\n", ulng_num); 
    printf("u_lng_lng_num = %llu\n", u_lng_lng_num); 

    printf("Unsigned integers in OCTAL:\n"); 
    printf("c3 = %hho\n", c3); 
    printf("us_num = %ho\n", us_num); 
    printf("ui_num = %o\n", ui_num); 
    printf("ulng_num = %lo\n", ulng_num); 
    printf("u_lng_lng_num = %llo\n", u_lng_lng_num);

    printf("Unsigned integers in HEXADECIMAL:\n"); 
    printf("c3 = %hhx\n", c3); 
    printf("us_num = %hx\n", us_num); 
    printf("ui_num = %x\n", ui_num); 
    printf("ulng_num = %lx\n", ulng_num); 
    printf("u_lng_lng_num = %llx\n", u_lng_lng_num);

    printf("Floating point:\n"); 
    printf("f_num = %f\n", f_num); 
    printf("d_num = %lf\n", d_num); 

    printf("Controlling precision of floating point:"); 
    printf("f_num = %.1f\n", f_num); 
    printf("f_num = %.2f\n", f_num);
    printf("f_num = %.3f\n", f_num);
    printf("f_num = %.4f\n", f_num); 
}

/*  
FORMAT SPECIFIER -> SIGNED DECIMAL 
                    char %hhd
            short %hd
    int %d 
            long %ld
                    long long %lld

Geometric Progression 
a   a*r     a*r^2   a*r^3   a*r^4

n term = a * r^(n-1) 

a/r^2 
a/r 
a 
a*r
a*r^2
//////////////////////////////////////////////
FORMAT SPECIFIER -> UNSIGNED DECIMAL 
                    char %hhu
            short %hu
    int %u 
            long %lu
                    long long %llu
//////////////////////////////////////////////
FORMAL SPECIFIER -> OCTAL 
unsigned char ->        %hho 
unsigned short ->       %ho 
unsigned int ->         %o 
unsigned long int ->    %lo 
unsigned long long ->   %llo
//////////////////////////////////////////////
FORMAL SPECIFIER -> HEXADECIMAL
unsigned char ->        %hhx
unsigned short ->       %hx
unsigned int ->         %x
unsigned long int ->    %lx 
unsigned long long ->   %llx
//////////////////////////////////////////////

*/