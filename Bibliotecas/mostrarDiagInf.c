#include <stdio.h>
#include "../main/misFunciones.h"

void MostrarDiagInf(int mat[][TAMCOL])
{
    int i,j;
    for(i=1;i<TAMCOL;i++)     ///Para considerar la diag inferior se cambia en el FOR i a 0 y se pone el <= en el FOR j
    {
        for(j=0;j<i;j++)
           printf("%d\t",mat[i][j]);
    }
}