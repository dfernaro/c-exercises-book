#include <stdio.h>

int main()
{
    int numero = -32;

    if (numero > 0)
    {
        printf("Número positivo");
    }
    else if (numero < 0)
    {
        printf("Número negativo");
    }
    else
    {
        printf("Cero");
    }

    return 0;
}