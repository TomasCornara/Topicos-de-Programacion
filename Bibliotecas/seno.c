#include <math.h>
#include "../main/misFunciones.h"

float seno(float numero, float tol)
{
    int exponente=3,signo= -1;
    double seno = numero,termino;
    do
    {
        termino= signo * pow(numero,exponente)/factorial(exponente);
        seno +=termino;
        exponente += 2;
        signo *= -1;
    }
    while(fabs(termino) >= tol);

    return(seno);
}
