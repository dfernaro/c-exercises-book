#include <stdio.h>

int main()
{
    int lista[4] = {12, 5, 3, 45};
    int maximo = lista[0];

    for (int i = 0; i < 4; i++)
    {
        if (lista[i] > maximo)
        {
            maximo = lista[i];
        }
    }

    printf("Máximo: %d", maximo);

    return 0;
}