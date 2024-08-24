#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool contiene_elemento(const char *elementos[], int tamanyo, const char *elemento)
{
    for (int i = 0; i < tamanyo; i++)
    {
        if (strcmp(elementos[i], elemento) == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    const char *lista[] = {"Francisco", "Margarita"};
    int numero_elementos = sizeof(lista) / sizeof(lista[0]);

    bool existe = contiene_elemento(lista, numero_elementos, "Margarita");

    printf("¿Está Margarita en la lista [\"Francisco\", \"Margarita\"]: %s\n", existe ? "Si" : "No");

    return 0;
}