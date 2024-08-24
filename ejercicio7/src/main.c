#include <stdio.h>
#include <string.h>

int main()
{
    char ejemplo[] = "Hola Margarita!";
    char ejemplo2[100];

    char *posicion = strstr(ejemplo, "Hola");
    int longitud = posicion - ejemplo;

    strncpy(ejemplo2, ejemplo, longitud);
    strcpy(ejemplo2 + longitud, "Hasta luego");
    strcpy(ejemplo2 + longitud + strlen("Hasta luego"), posicion + strlen("Hola"));

    printf("%s", ejemplo2);

    return 0;
}