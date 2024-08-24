#include <stdio.h>

int main()
{
    FILE *fichero = fopen("ejercicio100.txt", "r");
    if (fichero == NULL)
    {
        perror("Error leyendo el fichero");
        return 1;
    }

    int c;
    while ((c = fgetc(fichero)) != EOF)
    {
        putchar(c);
    }

    fclose(fichero);

    return 0;
}