#include <stdio.h>

int main()
{
    for (int numero = 1; numero < 101; numero++)
    {
        if (numero % 2 == 1)
        {
            printf("%d ", numero);
        }
    }

    return 0;
}