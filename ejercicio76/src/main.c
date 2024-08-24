#include <stdio.h>
#include <ctype.h>

int contar_vocales(const char *frase)
{
    int contador = 0;
    char letra;

    while ((letra = *frase++) != '\0')
    {
        letra = tolower(letra);
        if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u'))
        {
            contador = contador + 1;
        }
    }

    return contador;
}

int main()
{
    const char *frase = "Esto ES un ejemplo";
    int numero_vocales = contar_vocales(frase);

    printf("La frase tiene %d vocales\n", numero_vocales);

    return 0;
}