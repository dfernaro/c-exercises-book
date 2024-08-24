#include <stdio.h>

int main()
{
    int numero = 10;
    int total = 0;

    for (int i = 1; i <= numero; i++)
    {
        total = total + i;
    }

    printf(
        "La suma de todos los números desde el 1 al %d es %d",
        numero, total);

    return 0;
}