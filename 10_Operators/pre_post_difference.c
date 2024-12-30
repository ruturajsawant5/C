#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
    int num_1 = 10; 
    int num_2 = 20; 
    int rs1=0, rs2=0; 

    printf("num_1 = %d\n", num_1); /* 10 */
    rs1 = ++num_1; 
    printf("num_1=%d, rs1=%d\n", num_1, rs1); /* num_1 = 11 && rs1 == 11*/
    rs2 = num_1++; 
    printf("num_1=%d, rs2=%d\n", num_1, rs2); /* num_1 == 12 && rs2 == 11*/

    rs1 = 0; 
    rs2 = 0; 

    rs1 = --num_2; 
    printf("num_2 = %d, rs1 = %d\n", num_2, rs1); /* num_2 == 19, rs1 == 19 */
    rs2 = num_2--; 
    printf("num_2 = %d, rs2 = %d\n", num_2, rs2); /* num_2 == 18, rs2 == 19 */

    return (0);  
}
