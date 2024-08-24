#include <stdio.h>

int main()
{
    const char *vehiculos[3] = {"coche", "camión", "helicóptero"};

    for (int i = 0; i < 3; i++)
    {
        printf("Vehículo: %s\n", vehiculos[i]);
    }

    return 0;
}