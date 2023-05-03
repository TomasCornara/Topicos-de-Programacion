#include <stdio.h>
#include "../main/misFunciones.h"

void MostrarTriangulitoIzq(int mat[][TAMCOL])
{
    int i,j;
    for(i=0;i<TAMCOL-1;i++)
        for(j=0;j<i;j++)
            printf("%d\t",mat[i][j]);
}