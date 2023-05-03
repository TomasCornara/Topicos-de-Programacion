#include <stdio.h>
#include "../main/misFunciones.h"

void RecorrerMatrizEnEspiral(int mat[][TAMCOL])
{
    int i, j, k;
    int fila_inicio = 0, fila_fin = TAMFIL-1;
    int col_inicio = 0, col_fin = TAMCOL-1;

    while (fila_inicio <= fila_fin && col_inicio <= col_fin)
    {
        for (j = col_inicio; j <= col_fin; j++)
            printf("%d ", mat[fila_inicio][j]);
        fila_inicio++;

        for (i = fila_inicio; i <= fila_fin; i++)
            printf("%d ", mat[i][col_fin]);
        col_fin--;

        if (fila_inicio <= fila_fin)
        {
            for (j = col_fin; j >= col_inicio; j--)
                printf("%d ", mat[fila_fin][j]);
            fila_fin--;
        }
        
        if (col_inicio <= col_fin)
        {
            for (i = fila_fin; i >= fila_inicio; i--)
                printf("%d ", mat[i][col_inicio]);
            col_inicio++;
        }
    }
}