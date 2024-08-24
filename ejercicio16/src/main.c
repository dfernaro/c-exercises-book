#include <stdio.h>
#include <math.h>

int main()
{
    int x = 2;
    int y = 3;

    int suma = x + y;
    int resta = x - y;
    int multiplicacion = x * y;
    float division = (float)x / (float)y;
    int modulo = x % y;
    int exponente = (int)pow(x, y);

    printf("%d\n", suma);
    printf("%d\n", resta);
    printf("%d\n", multiplicacion);
    printf("%f\n", division);
    printf("%d\n", modulo);
    printf("%d\n", exponente);

    return 0;
}