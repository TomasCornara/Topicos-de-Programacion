#include <stdio.h>
#include "../main/misFunciones.h"

void MultiplicarMatrices(int mat1[][TAMCOL1], int mat2[][TAMCOL2], int res[][TAMCOL2])
{
    int i, j, k;

    // Inicializamos la matriz resultado con ceros
    for (i = 0; i < TAMFIL1; i++)
    {
        for (j = 0; j < TAMCOL2; j++)
        {
            res[i][j] = 0;
        }
    }

    // Multiplicamos las matrices
    for (i = 0; i < TAMFIL1; i++)
    {
        for (j = 0; j < TAMCOL2; j++)
        {
            for (k = 0; k < TAMCOL1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
