#include <stdio.h>
#include <string.h>

int main()
{
    char frase[] = "Me gusta programar";
    char *palabra;

    palabra = strtok(frase, " ");

    while (palabra != NULL)
    {
        printf("%s\n", palabra);
        palabra = strtok(NULL, " ");
    }

    return 0;
}