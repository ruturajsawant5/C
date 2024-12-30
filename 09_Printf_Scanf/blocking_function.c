/*  
    stdio -> standard input output
    standard output device -> Monitor, console, terminal 
    standard input device -> keyboard 
    IO -> input / output 

    stdlib -> standard library functions 

    conio -> console input / output functions 
*/ 


#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 

int main(void)
{
    char c; 

    printf("Start of program\n");
    c = _getch(); 
    printf("c = %c\n", c); 
    printf("End of program\n"); 
    
    exit(0); 
}