#include <stdio.h>

int main()
{
    int numero = 14;

    if (numero % 7 == 0)
    {
        printf("%d es múltiplo de 7", numero);
    }
    else
    {
        printf("%d no es múltiplo de 7", numero);
    }

    return 0;
}