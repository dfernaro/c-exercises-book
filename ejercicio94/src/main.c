#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Especialidad
{
    IT,
    RECURSOS_HUMANOS,
    MARKETING,
};

struct Empleado
{
    char nombre[100];
    int edad;
    enum Especialidad especialidad;
};

const char *transformar_especialidad_a_cadena(enum Especialidad especialidad)
{
    switch (especialidad)
    {
    case IT:
        return "IT";
    case RECURSOS_HUMANOS:
        return "Recursos Humanos";
    case MARKETING:
        return "Marketing";
    default:
        return "Especialidad inválido";
    }
}

int main()
{
    struct Empleado empleado;

    strcpy(empleado.nombre, "Marina");
    empleado.edad = 34;
    empleado.especialidad = RECURSOS_HUMANOS;

    empleado.edad = 29;
    empleado.especialidad = MARKETING;

    FILE *fichero = fopen("ejercicio94.txt", "w");
    if (fichero == NULL)
    {
        perror("Error durante la creación");
        return 1;
    }

    if (fprintf(fichero, "Nombre: %s\n", empleado.nombre) < 0)
    {
        perror("Error durante la escritura");
        fclose(fichero);
        return 1;
    }

    if (fprintf(fichero, "Edad: %d\n", empleado.edad) < 0)
    {
        perror("Error durante la escritura");
        fclose(fichero);
        return 1;
    }

    if (fprintf(fichero, "Especialidad: %s\n", transformar_especialidad_a_cadena(empleado.especialidad)) < 0)
    {
        perror("Error durante la escritura");
        fclose(fichero);
        return 1;
    }

    fclose(fichero);

    return 0;
}