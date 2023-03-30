#include "../main/misFunciones.h"

unsigned int combinatorio(unsigned int numM, unsigned int numN)
{
    return(factorial(numM)/(factorial(numN)*factorial(numM-numN)));
}
