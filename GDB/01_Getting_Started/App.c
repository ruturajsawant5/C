#include <stdlib.h>

void bar()
{
    abort();
}

void foo()
{
    bar();
}

int main(int argc, const char * argv[])
{
    foo();
    return 0;
}
