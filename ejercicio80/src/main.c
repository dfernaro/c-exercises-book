#include <stdio.h>

float media(const int numeros[], int tamanyo)
{
    int suma = 0;

    for (int i = 0; i < tamanyo; i++)
    {
        suma = suma + numeros[i];
    }

    if (tamanyo == 0)
    {
        return 0.0;
    }

    return (float)suma / tamanyo;
}

int main()
{
    int numeros[] = {15, 65, 20};
    int tamanyo = sizeof(numeros) / sizeof(numeros[0]);

    float resultado = media(numeros, tamanyo);

    printf("La media es: %.2f", resultado);

    return 0;
}