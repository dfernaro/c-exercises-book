#include <stdio.h>

int main()
{
    for (int numero = 1; numero < 10; numero++)
    {
        if (numero % 2 == 0)
        {
            printf("%d ", numero);
        }
    }

    return 0;
}