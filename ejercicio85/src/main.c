#include <stdio.h>

struct Cuadrado
{
    int lado;
};

int main()
{
    struct Cuadrado cuadrado;

    cuadrado.lado = 15;

    printf("Lado: %d\n", cuadrado.lado);
    printf("Area: %d\n", cuadrado.lado * cuadrado.lado);

    return 0;
}