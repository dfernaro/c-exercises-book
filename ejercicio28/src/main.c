#include <stdio.h>

int main()
{
    int numero1 = 2;
    int numero2 = 3;
    char operador = '+';

    if (operador == '+')
    {
        printf("Resultado: %d", numero1 + numero2);
    }
    else if (operador == '-')
    {
        printf("Resultado: %d", numero1 - numero2);
    }
    else if (operador == '*')
    {
        printf("Resultado: %d", numero1 * numero2);
    }
    else if (operador == '/')
    {
        printf("Resultado: %.2f", (float)numero1 / (float)numero2);
    }
    else
    {
        printf("Operador no válido");
    }

    return 0;
}