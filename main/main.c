#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int buscarPalabra(char*, int*, char*);

int main() {
    int cantLetras;
    char* iniPalabra, *finPalabra;
    char frase [] = "    esta es mi frase con  varias palabras";
    int posInicioPalabra = buscarPalabra(frase, &cantLetras, &finPalabra);

    return(posInicioPalabra);
}


int buscarPalabra(char* string, int* cant, char* finDePalabra)
{
    char* inicioPalabra = NULL;
    char* ptr = string;
    int cantidadLetras = 0;

    while (*ptr != '\0' && *ptr) {
        ptr++;
    }

    if (*ptr == '\0') {
        return -1;
    }

    inicioPalabra = ptr;

    while (*ptr != '\0' && *ptr) {
        cantidadLetras++;
        ptr++;
    }

    *cant = cantidadLetras;
    *finDePalabra = ptr - 1;

    return inicioPalabra - string;
}
