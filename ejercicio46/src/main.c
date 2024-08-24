#include <stdio.h>
#include <math.h>

int main()
{
    int numero = 5;

    for (int i = 1; i <= numero; i++)
    {
        int cubo = (int)pow(i, 3);
        printf("El cubo de %d es %d\n", i, cubo);
    }

    return 0;
}