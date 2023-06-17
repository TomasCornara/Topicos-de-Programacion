#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"
#include <string.h>

int main()
{
    char texto[]="Este.Es.Mi.Texto..De..EJEMPLO...Para.Testear.Este..Este..Este..oximoron";
    char *token = NULL;
    char *primeraPalabra = NULL; //A
    int cantPrimPal=1; // A
    int cantPal = 0; // B
    char *palMasLarga = NULL; // C

    token = strtok(texto,".");
    if (token == NULL)
    {
        printf("No hay palabras \n");
        return(1);
    }

    //Primer palabra
    primeraPalabra = token;
    palMasLarga = token; //Porque la primer palabra tambien es la palabra mas larga (de momento)
    cantPal++;

    //Resto
    while(token != NULL)
    {
        token = strtok(NULL,".");
        if (token == NULL) {
            break;
        }

        if(strcmp(token,primeraPalabra) == 0){
            cantPrimPal++;
        }

        //C
        if (strlen(token) > strlen(palMasLarga))
        {
            palMasLarga = token;
        }

        //Punto B
        cantPal++;
    }

    printf("PUNTO A: La primera palabra que aparece es %s y aparece %d veces \n",primeraPalabra,cantPrimPal);
    printf("PUNTO B: El texto tiene %d palabras \n",cantPal);
    printf("PUNTO C: La palabra mas larga es %s y su longitud es de %d",palMasLarga,strlen(palMasLarga));

    return 0;
}

