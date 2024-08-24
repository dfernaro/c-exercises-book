#include <stdio.h>
#include <stdbool.h>

bool contiene_elemento(int lista[], int tamanyo, int numero)
{
    for (int i = 0; i < tamanyo; i++)
    {
        if (lista[i] == numero)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int lista[7] = {4, 131, 1, 45, 131, 45, 4};
    int lista_sin_duplicados[7];
    int contador_elementos_sin_duplicar = 0;

    for (int i = 0; i < 7; i++)
    {
        if (!contiene_elemento(lista_sin_duplicados, contador_elementos_sin_duplicar, lista[i]))
        {
            lista_sin_duplicados[contador_elementos_sin_duplicar] = lista[i];
            contador_elementos_sin_duplicar++;
        }
    }

    printf("Resultado: ");
    for (int i = 0; i < contador_elementos_sin_duplicar; i++)
    {
        printf("%d ", lista_sin_duplicados[i]);
    }
    printf("\n");

    return 0;
}