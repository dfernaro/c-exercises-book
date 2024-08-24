#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[] = "Programar";

    for (int i = 0; i < strlen(palabra); i++)
    {
        printf("%c\n", palabra[i]);
    }

    return 0;
}