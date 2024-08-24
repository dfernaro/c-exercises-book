#include <stdio.h>
#include <time.h>

int main()
{
    time_t tiempo_actual = time(NULL);
    struct tm *fecha = localtime(&tiempo_actual);

    char fecha_formateada[100];
    strftime(fecha_formateada, sizeof(fecha_formateada), "%Y-%m-%d %H:%M:%S", fecha);

    printf("Fecha: %s\n", fecha_formateada);

    return 0;
}