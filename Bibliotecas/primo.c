#include <stdio.h>

void primo(int numero)
{
    int cantDivisores = 0,contador;

    for(contador=1; contador<=numero; contador++)
    {
        if (numero % contador == 0)
        {
            cantDivisores++;
        }
    }

    printf("El numero %d %s primo",numero,(cantDivisores == 2)? "es":"no es");
}
