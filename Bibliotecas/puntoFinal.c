#include <stdio.h>
#include "../main/misFunciones.h"

void normalizarPuntoFinal(char *cadena) {
    int longitud = stringLength(cadena);

    if (longitud > 0 && cadena[longitud - 1] != '.') {
        // Agregar un punto al final de la cadena
        cadena[longitud - 1] = '.';
        cadena[longitud] = '\0';
    }
}
