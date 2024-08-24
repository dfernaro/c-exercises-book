#include <stdio.h>

int main()
{
    for (int x = 9; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            printf("%d ", y);
        }
        printf("\n");
    }

    return 0;
}