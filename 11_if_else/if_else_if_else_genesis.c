int main(void)
{
    int n; 

    printf("Enter n:"); 
    scanf("%d", &n); 

    if(n > 0)
    {
        printf("%d is a positive number\n", n); 
    }
    else 
    {
        /* control flow comes here if n <= 0*/
        if (n < 0)
        {
            printf("%d is a negative number\n", n); 
        }
        else 
        {
            printf("%d is zero\n", n); 
        }
    }

    exit(0); 
}

void test_function(void)
{
    if(cond_1 is TRUE)
    {

    }
    else 
    {
        if(cond_2 is TRUE)
        {

        }
        else 
        {
            if(cond_3 is True)
            {

            }
            else 
            {

            }
        }
    }
}

void test(void)
{
    if(cond_1 is TRUE)
    {

    }
    else if(cond_2 is TRUE)
    {

    }
    else if(cond_3 is True)
    {

    }
    else 
    {
        
    }
}