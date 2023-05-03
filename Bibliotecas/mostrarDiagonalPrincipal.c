#include <stdio.h>
#include "../main/misFunciones.h"

void MostrarDiagPpal(int mat[][TAMCOL])
{
    int i;
    for(i=0;i<TAMCOL;i++)
        printf("%d\t",mat[i][i]);
}
