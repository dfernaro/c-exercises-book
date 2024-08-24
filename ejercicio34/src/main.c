#include <stdio.h>

int main()
{
    int x = 86;
    int y = -99;

    if (x % 2 == 0)
    {
        x = y;
        y = y * 2;
    }
    else
    {
        y = x / 2;
        x = x * 2;
    }

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}