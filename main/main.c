#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main()
{
    int vector[4] = {1,2,1,3},tam = 4;
    eliminarPrim(vector,&tam,3);

    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", vector[i]);

    }
    return 0;

}
