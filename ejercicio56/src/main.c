#include <stdio.h>
#include <math.h>

int main()
{
    int lista[5] = {1, 2, 3, 4, 5};
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        lista[i] = (int)pow(lista[i], 3);
    }

    printf("Resultado: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}