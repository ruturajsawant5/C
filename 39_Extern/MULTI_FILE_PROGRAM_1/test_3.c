#include <stdio.h> 

struct Date 
{
    int day; 
    int month; 
    int year; 
}; 

/* All of the following statements are 
    PURELY DATA DECLARATER STATEMETS WHICH 
    DECLARE TYPE OF GLOBAL VARIABLE DEFINED 
    IN OTHER FILE 
*/
extern char g_char; 
extern int g_num; 
extern float g_fnum; 
extern int g_arr[5]; 
extern struct Date g_date_instance; 

void print_data(void)
{
    int i; 
 
    printf("g_char = %c, g_num = %d, g_fnum = %.2f\n", 
            g_char, g_num, g_fnum); 

    for(i = 0; i < 5; ++i)
        printf("g_arr[%d]:%d\n", i, g_arr[i]); 

    printf("%d-%d-%d\n", g_date_instance.day, 
                        g_date_instance.month, 
                        g_date_instance.year 
        ); 
}