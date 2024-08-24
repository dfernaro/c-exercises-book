#include <stdio.h>

int main()
{
    int lista[4] = {12, 5, 3, 45};
    int minimo = lista[0];

    for (int i = 0; i < 4; i++)
    {
        if (lista[i] < minimo)
        {
            minimo = lista[i];
        }
    }

    printf("Mínimo: %d", minimo);

    return 0;
}