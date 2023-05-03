#include <stdio.h>
#include "../main/misFunciones.h"

void MostrarTrianSup(int mat[][TAMCOL])
{
    int i,j;
    for(i=0;i<TAMCOL-1;i++)
    {
        for(j=i+1;j<=TAMCOL-1;j++)  ///PARA CONSIDERAR LA DIAG PPAL QUITAR EL +1 DEL FOR
            printf("%d\t",mat[i][j]);
    }
}