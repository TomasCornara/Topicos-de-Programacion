#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main()
{
    int vector[4] = {1,3,5,7};
    insertarOrdenado(vector,4,1);

    int i;
    for (i = 0; i < 4; i++) {
        printf("%d ", vector[i]);
    }
    return 0;

}
