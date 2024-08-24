#include <stdio.h>

int main()
{
    FILE *fichero = fopen("ejercicio96.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    int lista[4] = {12, 5, 3, 45};
    int total = 0;

    for (int i = 0; i < 4; i++)
    {
        total = total + lista[i];
    }

    if (fprintf(fichero, "Suma total: %d", total) < 0)
    {
        perror("Error durante la escritura");
        fclose(fichero);
        return 1;
    }

    fclose(fichero);

    return 0;
}