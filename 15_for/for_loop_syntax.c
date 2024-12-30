/* while statement */

void test_1(void)
{
    int i; 
    int N = 5; 

    i = 0;          /* loop variable initialisation */
    while(i < N)    /*  i < N : loop variable condition */
    {
        /* BLOCK OF STATEMENTS */
        i = i + 1;  /* loop variable modifcation */
    }
}

/*  
    general structure 

    loop variable initialisation; 
    while(loop variable condition)
    {
        BLOCK OF STAEMENTS 
        loop variable modification; 
    }

    int i; 
    int j; 
    int N1; 
    int N2; 
    i = 0; 
    while(i < N1)
    {
        j = 0; 
        while(j < N2)
        {
            
            j = j + 1; 
        }

        i = i + 1; 
    }

*/

/* for loop */

void test(void)
{
    int i; 
    int N; 

    for(i = 0; i < N; i = i + 1)
    {

    }

    /* 
        i = 0; 
        while(i < N)
        {

            i = i + 1; 
        }
    */

    /* 
        i = 0; 
        while(i < 5)
        {
            i = i + 1; 
        }
    */

}