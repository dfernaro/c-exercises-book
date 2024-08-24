#include <stdio.h>

int main()
{
    FILE *fichero = fopen("ejercicio95.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    for (int x = 1; x <= 9; x++)
    {
        for (int y = 0; y < x; y++)
        {
            printf("%d", x);
            if (fprintf(fichero, "%d", x) < 0)
            {
                perror("Error durante la escritura");
                fclose(fichero);
                return 1;
            }
        }
        if (fprintf(fichero, "\n") < 0)
        {
            perror("Error durante la escritura");
            fclose(fichero);
            return 1;
        }
    }

    fclose(fichero);

    return 0;
}