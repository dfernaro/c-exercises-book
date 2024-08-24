#include <stdio.h>

int main()
{
    char palabra[] = "Hello";

    printf("Resultado: ");
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        printf("%c ", palabra[i]);
    }
    printf("\n");

    return 0;
}