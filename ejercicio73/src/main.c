#include <stdio.h>

void factorial(int factorial)
{
    int resultado = 1;

    if (factorial < 0)
    {
        printf("El factorial no existe para números negativos");
    }
    else if (factorial == 0)
    {
        printf("El factorial de 0 es 1");
    }
    else
    {
        for (int i = 1; i < factorial + 1; i++)
        {
            resultado = resultado * i;
        }
        printf("El factorial de %d es %d", factorial, resultado);
    }
}

int main()
{
    factorial(5);

    return 0;
}