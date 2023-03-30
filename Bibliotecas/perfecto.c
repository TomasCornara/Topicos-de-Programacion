#include <math.h>
#include <stdio.h>
#include "../main/misFunciones.h"

void perfecto (int numero)
{
    int cantDivs = 0, contador;
    for (contador = 1; contador < numero; contador++)
    {
        cantDivs += ((numero % contador) == 0)? contador : 0;
    }

    if (cantDivs == numero){
        printf("perfecto");
    }

    if (cantDivs > numero){
        printf("abundante");
    }

    if (cantDivs < numero){
        printf("deficiente");
    }
}
