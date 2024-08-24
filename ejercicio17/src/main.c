#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[] = "Me gusta C";
    int tamanyo = strlen(texto);

    for (int i = 0; i < tamanyo; i++)
    {
        texto[i] = toupper(texto[i]);
    }

    printf("%s\n", texto);

    return 0;
}