#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[2][3]; // matriz[fila][columna]
    int promGanancia = 0, valMax = 0, valMin = 50000, anioMax = 0, mesMax=0, anioMin = 0, mesMin = 0;

    for (int i = 1; i < 3; i++) // fila
    {
        for (int j = 1; j < 4; j++) // columna
        {
            matriz[i][j] = rand() % 50000 + 10000; // números aleatorios del 10000 al 50000
        }
        printf(" \n");
    }

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf(" \n");
    }
    // Promedio Ganancias
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            promGanancia = matriz[i][j] + promGanancia;
        }
        promGanancia = promGanancia / 2;
        printf("El promedio de la ganancia el año %d es: %d", i, promGanancia);
        printf(" \n");
    }

    // Valor máximo y mínimo
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j <4; j++)
        {

            if (valMax < matriz[i][j])
            {
                valMax = matriz[i][j];
                anioMax = i;
                mesMax = j;
            }
            if (valMin > matriz[i][j])
            {
                valMin = matriz[i][j];
                anioMin = i;
                mesMin = j;
            }
        }
    }
    printf("El valor máximo ganado fue en el año %d y mes %d es: %d", anioMax, mesMax, valMax);
    printf("El valor minimo ganado fue en el año %d y mes %d es: %d", anioMin, mesMin, valMin);
    return 0;
}
