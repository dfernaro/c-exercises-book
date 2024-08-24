#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fichero = fopen("ejercicio89.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    for (int x = 1; x < 11; x++)
    {
        for (int y = 0; y < x; y++)
        {
            fputc('*', fichero);
        }
        fputc('\n', fichero);
    }

    fclose(fichero);

    return 0;
}