#include <math.h>

float raizCuadrada(unsigned int numeroA, float tol)
{
    float r1 = 1.0, r2 = 0.0;

    while (fabs(r1 - r2) > tol) {
        r2 = r1;
        r1 = 0.5 * (r1 + numeroA / r1);
    }

    return r1;
}

