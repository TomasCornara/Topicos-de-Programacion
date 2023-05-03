#include <stdio.h>
#include "../main/misFunciones.h"

void MostrarTriangulitoSup(int mat[][TAMCOL])
{
    int i,j;
    for(i=0;i<TAMCOL-1-i;i++)
        for(j=i+1;j<TAMCOL-1-i;j++)
        printf("%d\t",mat[i][j]);
}
