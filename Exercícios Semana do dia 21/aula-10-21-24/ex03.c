/*
    Defina uma matriz de 4 linhas por 4 colunas e imprima a multiplicação de
    sua diagonal principal
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int matriz[4][4], mult = 1;
    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10 + 1;
            printf("%i  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for(int i = 0; i < 4; i++) {
        mult *= matriz[i][i];
    }

    printf("Mult = %i", mult);

    return 0;
}