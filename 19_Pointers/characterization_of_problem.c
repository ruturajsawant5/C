f()
{
    T v; 
    g(v); 
}

g(T v1)
{
    // v1 will be a CLONE 
    // of v 
    // and therefore
    // changes made to v1 
    // will not be reflected 
    // on v 
}

double sqrt(double); 

int main(void)
{   
    double rs; 
    double x = 2.5; 
    rs=sqrt(x); 
}

double sqrt(double number)
{
    
}
