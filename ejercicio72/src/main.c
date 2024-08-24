#include <stdio.h>

#define MAX_LIMITE 100

int *numeros_impares(int limite, int *tamanyo)
{
    static int numeros[MAX_LIMITE];

    *tamanyo = 0;
    for (int i = 1; i <= limite; i += 2)
    {
        if (*tamanyo < MAX_LIMITE)
        {
            numeros[*tamanyo] = i;
            (*tamanyo)++;
        }
    }
    return numeros;
}

int main()
{
    int limite = 20;
    int tamanyo;

    int *numeros = numeros_impares(limite, &tamanyo);

    for (int i = 0; i < tamanyo; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}