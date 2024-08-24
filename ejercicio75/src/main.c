#include <stdio.h>

char *mostrar_mensaje(const char *nombre, const char *apellido, int edad)
{
    static char mensaje[256];

    snprintf(mensaje, sizeof(mensaje), "%s %s tiene %d años", nombre, apellido, edad);

    return mensaje;
}

int main()
{
    printf(
        "%s",
        mostrar_mensaje("Francisco", "Silva", 18));

    return 0;
}