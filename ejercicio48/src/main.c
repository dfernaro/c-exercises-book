#include <stdio.h>
#include <ctype.h>

int main()
{
    char *frase = "Esto es un ejemplo";
    int total = 0;
    int dentro_palabra = 0;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (!isspace(frase[i]))
        {
            if (!dentro_palabra)
            {
                total = total + 1;
                dentro_palabra = 1;
            }
        }
        else
        {
            dentro_palabra = 0;
        }
    }

    printf("Total palabras: %d", total);

    return 0;
}