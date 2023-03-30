#include <math.h>
#include "../main/misFunciones.h"

float eAlaX (unsigned int numX, float tol)
{
    int contador = 1;
    float resultadoEX = 1, termino = 0;

    do {
     termino = pow(numX,contador)/factorial(contador);
     contador++;
     resultadoEX+=termino;
    }while(resultadoEX > tol);

    return(resultadoEX);
}
