#include <stdio.h>

int main()
{
    int numero = 6;

    if (numero == 1)
    {
        printf("Lunes");
    }
    else if (numero == 2)
    {
        printf("Martes");
    }
    else if (numero == 3)
    {
        printf("Miércoles");
    }
    else if (numero == 4)
    {
        printf("Jueves");
    }
    else if (numero == 5)
    {
        printf("Viernes");
    }
    else if (numero == 6)
    {
        printf("Sábado");
    }
    else if (numero == 7)
    {
        printf("Domingo");
    }
    else
    {
        printf("Número no válido.");
    }

    return 0;
}