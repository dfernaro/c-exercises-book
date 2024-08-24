#include <stdio.h>
#include <math.h>

int main()
{
    int x = 6;
    int y = -9;

    if (x > 0 || y > 0)
    {
        x = 10;
        y = y * 2;
    }
    else
    {
        y = y / 2;
        x = x * 2;
    }

    if (x >= 10)
    {
        x = pow(x, 2);
    }

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}