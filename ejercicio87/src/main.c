#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fichero = fopen("ejercicio87.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    if (fprintf(fichero, "Me encanta C!\n") < 0)
    {
        perror("Error durante la escritura");
        fclose(fichero);
        return 1;
    }

    if (fprintf(fichero, "Estoy aprendiendo mucho!\n") < 0)
    {
        perror("Error durante la escritura");
        fclose(fichero);
        return 1;
    }

    fclose(fichero);

    return 0;
}