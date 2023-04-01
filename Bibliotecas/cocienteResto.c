#include <math.h>
#include <stdio.h>
#include "../main/misFunciones.h"

resultDiv dividir(int dividendo,int divisor)
    {
        resultDiv resultado;

        if ( divisor == 0)
        {
            printf("No es posible dividir por 0\n");
            return((resultDiv)
            {
                0,0
            });

        }

        resultado.cociente = dividendo/divisor;
        resultado.resto = dividendo% divisor;

        return(resultado);
    }
