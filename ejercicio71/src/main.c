#include <stdio.h>
#include <string.h>

char *par_o_impar(int numero)
{
    static char resultado[10];

    if (numero % 2 == 0)
    {
        strcpy(resultado, "Par");
    }
    else
    {
        strcpy(resultado, "Impar");
    }

    return resultado;
}

int main()
{
    printf("%d es %s\n", 10, par_o_impar(10));
    printf("%d es %s\n", 7, par_o_impar(7));

    return 0;
}