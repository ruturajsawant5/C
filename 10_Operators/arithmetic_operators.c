

#include <stdio.h> 
#include <stdlib.h> 

int n1;             /* To store number 1 of 2 */
int n2;             /* To store number 2 of 2 */
int summation;      /* To store summation of two numbers */
int subtraction;    /* To store subtraction of two numbers */
int multiplication; /* To store the multiplication of two nubmers */
int quotient;       /* To store the quotient of division of n1 by n2 */
int remainder;      /* To store the remainder of division of n1 by n2 */

int main(void)
{
    printf("Enter number 1 of 2:"); 
    scanf("%d", &n1);

    printf("Enter number 2 of 2:"); 
    scanf("%d", &n2); 

    summation = n1 + n2; 
    subtraction = n1 - n2; 
    multiplication = n1 * n2; 
    quotient = n1 / n2; 
    remainder = n1 % n2; 

    printf("Summation = %d, Subtraction=%d, Multiplication=%d, Quotient=%d, Remainder=%d\n", 
        summation, subtraction, multiplication, quotient, remainder); 

    exit(0); 
}
