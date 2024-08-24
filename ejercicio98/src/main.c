#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fichero = fopen("ejercicio98.txt", "r");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    const char *lista[5] = {"Rojo", "Blanco", "Azul", "Rojo", "Negro"};
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(lista[i], "Rojo") == 0)
        {
            total = total + 1;
        }
    }

    if (fprintf(fichero, "El color Rojo aparece %d veces", total) < 0)
    {
        perror("Error durante la escritura");
        fclose(fichero);
        return 1;
    }

    fclose(fichero);

    return 0;
}