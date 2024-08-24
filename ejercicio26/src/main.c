#include <stdio.h>

int main()
{
    float importe = 950.0;
    float descuento = 0.0;

    if (importe > 1000.0)
    {
        descuento = (40.0 / 100.0) * importe;
    }
    else if (importe > 100.0 && importe <= 1000.0)
    {
        descuento = (15.0 / 100.0) * importe;
    }
    else
    {
        descuento = (5.0 / 100.0) * importe;
    }

    float total = importe - descuento;

    printf("Importe: %.2f | Importe neto: %.2f", importe, total);

    return 0;
}