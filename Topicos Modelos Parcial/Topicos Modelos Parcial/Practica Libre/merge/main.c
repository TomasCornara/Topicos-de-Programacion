#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main()
{
    int cantCopiados = miMerge("merge1.txt","merge2.txt","merge3.txt");
    printf("Se han copiado %d",cantCopiados);
    return 0;
}
