#include <stdio.h>

struct Circulo
{
    float radio;
};

int main()
{
    struct Circulo circulo;

    circulo.radio = 2.0;

    printf("Radio: %.2f\n", circulo.radio);
    printf("Area: %.2f\n", circulo.radio * circulo.radio * 3.14);
    printf("Perimetro: %.2f\n", 2.0 * circulo.radio * 3.14);

    return 0;
}