#include <stdio.h>

void tabla_multiplicar(int numero)
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main()
{
    tabla_multiplicar(7);

    return 0;
}