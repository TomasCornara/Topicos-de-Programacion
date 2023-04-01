#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main()
{
    resultDiv x;

    x = dividir(11,2);
    printf("%d %d",x.cociente,x.resto);

    return (0);
}
