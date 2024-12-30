/* 
    How to repeat block of statement N times 
    where N is a positive integer 
*/

/* Way 1 */

void test_1(void)
{
    int i; 
    int N; 
    /* N = something */ /* N is assigned to some positive integer */
    i = 1; 
    while(i <= N)
    {
        /* BLOCK OF STATEMENTS */
        i = i + 1; 
    }
}

/* Way 2 */
void test_2(void)
{
    int i; 
    int N; 
    /* N will be assigned to positive integer */
    i = 0; 
    while(i <= N-1)
    {
        /* BLOCK OF STATEMENTS */
        i = i + 1; 
    }
}

/* Way 3 */
/*  
    i <= N-1
    i < N     
*/
void test_3(void)
{
    int i; 
    int N; 
    /* N is assigned to positive integer */
    i = 0; 
    while(i < N)
    {
        /* BLOCK OF STATEMENTS */
        i = i + 1; 
    }
}