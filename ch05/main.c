#include <stdio.h>

void foo()
{
    printf("The address of foo() is %p.\n", foo);
}

int main()
{
    foo();
    return 0;
}
