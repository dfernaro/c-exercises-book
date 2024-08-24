#include <stdio.h>
#include <ctype.h>

int main()
{
    char *frase = "Mi nombre es David";
    int total = 0;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        char letra = tolower(frase[i]);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            total = total + 1;
        }
    }

    printf("Número de vocales en el texto: %d", total);

    return 0;
}