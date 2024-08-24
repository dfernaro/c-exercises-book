#include <stdio.h>

int main()
{
    int lista[100];
    int total_numeros = 0;

    for (int i = 1; i < 101; i++)
    {
        if (i % 2 == 0)
        {
            lista[total_numeros] = i;
            total_numeros = total_numeros + 1;
        }
    }

    printf("Resultado: ");
    for (int i = 0; i < total_numeros; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}