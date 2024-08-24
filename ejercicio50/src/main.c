#include <stdio.h>

int main()
{
    int numero1 = 0;
    int numero2 = 1;

    for (int i = 1; i < 16; i++)
    {
        printf("%d ", numero1);
        int resultado = numero1 + numero2;
        numero1 = numero2;
        numero2 = resultado;
    }
    return 0;
}