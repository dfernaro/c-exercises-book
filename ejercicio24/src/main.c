#include <stdio.h>
#include <ctype.h>

int main()
{
    char letra = 'E';
    char letra_minuscula = tolower(letra);

    if (letra_minuscula == 'a' || letra_minuscula == 'e' || letra_minuscula == 'i' || letra_minuscula == 'o' || letra_minuscula == 'u')
    {
        printf("La letra %c es una vocal", letra);
    }
    else
    {
        printf("La letra %c no es una vocal", letra);
    }

    return 0;
}