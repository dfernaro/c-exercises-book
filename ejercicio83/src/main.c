#include <stdio.h>

enum Dias
{
    Lunes,
    Martes,
    Miercoles,
    Jueves,
    Viernes,
    Sabado,
    Domingo,
};

const char *transformar_dia_a_cadena(enum Dias dia)
{
    switch (dia)
    {
    case Lunes:
        return "Lunes";
    case Martes:
        return "Martes";
    case Miercoles:
        return "Miercoles";
    case Jueves:
        return "Jueves";
    case Viernes:
        return "Viernes";
    case Sabado:
        return "Sabado";
    case Domingo:
        return "Domingo";
    default:
        return "Día inválido";
    }
}

int main()
{
    enum Dias dia_elegido = Jueves;

    printf("Día elegido: %s", transformar_dia_a_cadena(dia_elegido));

    return 0;
}