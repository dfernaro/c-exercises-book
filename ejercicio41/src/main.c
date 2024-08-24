#include <stdio.h>

int main()
{
    for (int x = 1; x <= 9; x++)
    {
        for (int y = 0; y < x; y++)
        {
            printf("%d", x);
        }
        printf("\n");
    }

    return 0;
}