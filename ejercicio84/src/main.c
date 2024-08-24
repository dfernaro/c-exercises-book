#include <stdio.h>
#include <string.h>

enum Color
{
    Rojo,
    Verde,
    Amarillo,
};

struct Persona
{
    char nombre[100];
    int edad;
    enum Color color;
};

const char *transformar_color_a_cadena(enum Color color)
{
    switch (color)
    {
    case Rojo:
        return "Rojo";
    case Verde:
        return "Verde";
    case Amarillo:
        return "Amarillo";
    default:
        return "Color inválido";
    }
}

int main()
{
    struct Persona persona;

    strcpy(persona.nombre, "David");
    persona.edad = 18;
    persona.color = Amarillo;

    printf("Nombre: %s\n", persona.nombre);
    printf("Edad: %d\n", persona.edad);
    printf("Color: %s\n", transformar_color_a_cadena(persona.color));

    return 0;
}