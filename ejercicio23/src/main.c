#include <stdio.h>

int main()
{
    int numero = 17;

    if (numero % 2 == 0)
    {
        printf("El número %d es par", numero);
    }
    else
    {
        printf("El número %d es impar", numero);
    }

    return 0;
}