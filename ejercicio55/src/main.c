#include <stdio.h>

int main()
{
    int lista[3] = {25, 60, 30};
    int total = 0;

    for (int i = 0; i < 3; i++)
    {
        total = total + lista[i];
    }

    float promedio = (float)total / (float)3;

    printf("Promedio: %.2f", promedio);

    return 0;
}