#include <stdio.h>
#include <string.h>

int main()
{
    const char *lista[5] = {"Rojo", "Blanco", "Azul", "Rojo", "Negro"};
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(lista[i], "Rojo") == 0)
        {
            total = total + 1;
        }
    }

    printf("El color Rojo aparece %d veces", total);

    return 0;
}