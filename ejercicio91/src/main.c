#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fichero = fopen("ejercicio91.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    int numero = 8;

    for (int i = 1; i < 11; i++)
    {
        if (fprintf(fichero, "%d x %d = %d\n", numero, i, numero * i) < 0)
        {
            perror("Error durante la escritura");
            fclose(fichero);
            return 1;
        }
    }

    fclose(fichero);

    return 0;
}