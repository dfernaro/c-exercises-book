#include <stdio.h>

void fibonacci(int limite)
{
    int numero1 = 0;
    int numero2 = 1;

    for (int i = 1; i <= limite; i++)
    {
        printf("%d ", numero1);
        int resultado = numero1 + numero2;
        numero1 = numero2;
        numero2 = resultado;
    }
}

int main()
{
    int limite = 8;
    fibonacci(limite);

    return 0;
}