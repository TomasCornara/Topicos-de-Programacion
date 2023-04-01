#include <math.h>
#include <stdio.h>
#include "../main/misFunciones.h"

int multiplicacion (int numeroA,int numeroB)
{
    int resultado=0;
    for (; numeroB != 0; numeroB-- )
    {
        resultado+=numeroA;
    }
    return(resultado);
}
