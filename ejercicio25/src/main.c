#include <stdio.h>

int main()
{
    int nota = 96;

    if (nota > 95)
    {
        printf("Tu calificación es: A+");
    }
    else if (nota > 90 && nota <= 95)
    {
        printf("Tu calificación es: A");
    }
    else if (nota > 80 && nota <= 90)
    {
        printf("Tu calificación es: B");
    }
    else if (nota > 60 && nota <= 80)
    {
        printf("Tu calificación es: C");
    }
    else
    {
        printf("Tu calificación es: D");
    }

    return 0;
}