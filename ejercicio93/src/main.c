#include <stdio.h>
#include <string.h>

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

    printf("Nombre: %s\n", empleado.nombre);
    printf("Edad: %d\n", empleado.edad);
    printf("Especialidad: %s\n", transformar_especialidad_a_cadena(empleado.especialidad));

    return 0;
}