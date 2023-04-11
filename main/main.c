#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main()
{
    int vector[5] = {1,2,2,2,4},tam = 5;
    eliminarTodas(vector,&tam,2);

    int i;
    for (i = 0; i < tam; i++) {

        printf("%d ", vector[i]);

    }
    return 0;

}
