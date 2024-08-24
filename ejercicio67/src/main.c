#include <stdio.h>
#include <string.h>

char *test()
{
    static char texto[20];
    strcpy(texto, "Hola Francisco!!");
    return texto;
}

int main()
{
    printf("%s", test());

    return 0;
}