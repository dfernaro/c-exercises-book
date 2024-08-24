#include <stdio.h>

int main()
{
    int lista[4] = {12, 5, 3, 45};
    int total = 0;

    for (int i = 0; i < 4; i++)
    {
        total = total + lista[i];
    }

    printf("Suma total: %d", total);

    return 0;
}