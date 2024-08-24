#include <stdio.h>

int main()
{
    int lista1[5] = {1, 2, 3, 4, 5};
    int lista2[5];

    for (int i = 0; i < 5; i++)
    {
        lista2[i] = lista1[5 - i - 1];
    }

    printf("Resultado: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", lista2[i]);
    }
    printf("\n");

    return 0;
}