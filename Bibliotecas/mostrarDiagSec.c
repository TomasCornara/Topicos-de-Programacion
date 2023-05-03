#include <stdio.h>
#include "../main/misFunciones.h"

void MostrarDiagSec(int mat[][TAMCOL])
{
    int i;
    for(i=0;i<TAMCOL;i++)
        printf("%d\t",mat[i][(TAMCOL-i)-1]);
}