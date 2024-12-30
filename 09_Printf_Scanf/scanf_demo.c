
/* 
    Declaration of printf(), scanf() -> stdio.h 
    Declaration of exit() -> stdlib.h 
*/

#include <stdio.h> 
#include <stdlib.h> 

int num = 100; 

int main(void)
{
    printf("Enter an integer value on keyboard:"); 
    scanf("%d", &num); 
    printf("num = %d\n", num); 

    exit(0); 
}

/* 
    SIGNED DECIMAL INTEGERS INPUT 
        char -> %hhd 
        short -> %hd 
        int -> %d 
        long int -> %ld 
        long long int -> %lld 

    UNSIGNED DECIMAL INTEGERS INPUT 
        unsigned char -> %hhu 
        unsigned short int -> %hu 
        unsigned int -> %u 
        unsigned long int -> %lu 
        unsigned long long int -> %llu 

    FLOATING POINT NUMBERS 
        single precision floating point -> %f 
        double precision floating point -> %lf 

    Character: 
        single byte ASCII -> %c 
*/