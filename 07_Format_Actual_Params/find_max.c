int max(int n1, int n2); 

int main(void)
{
    int a = 500; 
    int b = 200; 
    max(10, 5);     // max() -> () -> call operator 
    max(a, b); 
    max(400, b); 

    return (0); 
}

int max(int n1, int n2)
{
    int max_number; 

    if(n1 > n2)
        max_number = n1; 
    else 
        max_number = n2; 

    return (max_number); 
}


/* 
    Option 1: 
        int max(int, int); // Decl 

        // Def 
        int max(int n1, int n2)
        {
            
        }    

    Option 2: 
        int max(int x, int y); // Decl 

        // Def 
        int max(int n1, int n2)
        {

        }

    Option 3: 
        int max(int n1, int n2); // Decl 

        // Def 
        int max(int n1, int n2)
        {

        }
 
*/

