#include <stdio.h>

int main()
{
    for (int x = 1; x < 11; x++)
    {
        for (int y = 0; y < x; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}