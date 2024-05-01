#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[5][12]; // matriz[fila][columna]
    int promGanancia = 0, valMax = 0, valMin = 50000, anioMax = 0, mesMax=0, anioMin = 0, mesMin = 0;

    for (int i = 0; i < 5; i++) // fila
    {
        for (int j = 0; j <12; j++) // columna
        {
            matriz[i][j] = rand() % 50000 + 10000; // números aleatorios del 10000 al 50000
        }
        printf(" \n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf(" \n");
    }
    // Promedio Ganancias
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            promGanancia = matriz[i][j] + promGanancia;
        }
        promGanancia = promGanancia / 2;
        printf("El promedio de la ganancia el año %d es: %d", i+1, promGanancia);
        printf(" \n");
    }

    // Valor máximo y mínimo
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <12; j++)
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
    printf("El valor máximo ganado fue en el año %d y mes %d es: %d\n", anioMax+1, mesMax+1, valMax);
    printf("El valor minimo ganado fue en el año %d y mes %d es: %d", anioMin+1, mesMin+1, valMin);
    return 0;
}
