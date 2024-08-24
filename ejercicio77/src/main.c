#include <stdio.h>
#include <string.h>

void palabra_reves(const char *palabra, char *resultado)
{
    int longitud = strlen(palabra);

    for (int i = 0; i < longitud; i++)
    {
        resultado[i] = palabra[longitud - 1 - i];
    }

    resultado[longitud] = '\0';
}

int main()
{
    const char *palabra = "Testing";
    char resultado[100];

    printf("Antes: %s\n", palabra);
    palabra_reves(palabra, resultado);
    printf("Después: %s\n", resultado);

    return 0;
}