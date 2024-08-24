#include <stdio.h>

int main()
{
    for (int numero = 1; numero < 20; numero++)
    {
        if (numero % 6 == 0)
        {
            printf("%d ", numero);
        }
    }

    return 0;
}