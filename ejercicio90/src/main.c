#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fichero = fopen("ejercicio90.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    for (int x = 1; x < 6; x++)
    {
        for (int y = 1; y < 6; y++)
        {
            fputc('*', fichero);
        }
        fputc('\n', fichero);
    }

    fclose(fichero);

    return 0;
}