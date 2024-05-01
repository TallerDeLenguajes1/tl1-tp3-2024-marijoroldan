#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *nombre[5];
    for (int i = 0; i < 5; i++)
    {
            nombre[i] = (char *)malloc(20 * sizeof(char));

        printf("Ingrese un nombre %d: ", i + 1);
        fflush(stdin);
        gets(nombre[i]);
    }
    printf("Lista de nombres: \n");
    for (int i = 0; i < 5; i++)
    {
        puts(nombre[i]);
        free(nombre[i]);
    }
    return 0;
}
