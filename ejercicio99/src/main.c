#include <stdio.h>

int main()
{
    FILE *fichero = fopen("ejercicio99.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    if (10 % 2 == 0)
    {
        fprintf(fichero, "Ejercicio 99");
    }

    fclose(fichero);

    return 0;
}