#include <stdio.h>
#include <string.h>

struct Persona
{
    char nombre[100];
    int edad;
    char color[100];
};

int main()
{
    struct Persona persona;

    strcpy(persona.nombre, "David");
    persona.edad = 18;
    strcpy(persona.color, "Rojo");

    printf("Nombre: %s\n", persona.nombre);
    printf("Edad: %d\n", persona.edad);
    printf("Color: %s\n", persona.color);

    return 0;
}