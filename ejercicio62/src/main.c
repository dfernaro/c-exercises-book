#include <stdio.h>
#include <math.h>

int main()
{
    int numeros[20];

    for (int i = 0; i <= 20; i++)
    {
        int cuadrado = (int)pow(i + 1, 2);
        numeros[i] = cuadrado;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}