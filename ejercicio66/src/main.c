#include <stdio.h>

int main()
{
    const int total_numeros = 4;
    int numeros[total_numeros] = {12, 131, 1, 45};
    int total = 0;

    for (int i = 0; i < total_numeros; i++)
    {
        total = total + numeros[i];
    }

    printf("Suma: %d", total);

    return 0;
}