#include <stdio.h>

int mayor(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    printf("Mayor valor pasado por parámetros: %d", mayor(10, 20));

    return 0;
}