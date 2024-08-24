#include <stdio.h>
#include <ctype.h>

int main()
{
    const int total_palabras = 4;
    const char *lista1[total_palabras] = {"manzana", "cereza", "kiwi", "mango"};
    char lista2[total_palabras][100];

    for (int i = 0; i < total_palabras; i++)
    {
        int j;
        for (j = 0; lista1[i][j] != '\0'; j++)
        {
            lista2[i][j] = toupper(lista1[i][j]);
        }

        lista2[i][j] = '\0';
    }

    printf("Resultado: ");
    for (int i = 0; i < total_palabras; i++)
    {
        printf("%s ", lista2[i]);
    }
    printf("\n");

    return 0;
}