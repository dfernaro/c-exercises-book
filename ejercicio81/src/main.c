#include <stdio.h>
#include <string.h>

struct Vehiculo
{
    char matricula[100];
    char nombre[100];
};

int main()
{
    struct Vehiculo vehiculo;
    
    strcpy(vehiculo.matricula, "XXXXXX");
    strcpy(vehiculo.nombre, "Mi coche");

    printf("Matrícula: %s\n", vehiculo.matricula);
    printf("Nombre: %s\n", vehiculo.nombre);

    return 0;
}