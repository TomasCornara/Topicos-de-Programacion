#include <stdio.h>
#include "../main/misFunciones.h"
void normalizarQuitarBlancos(char *cadena) {
    int i;
    int longitud = stringLength(cadena);

    for (i = 0; i < longitud; i++) {
        if (cadena[i] == ' ') {
            // Eliminar el espacio en blanco de la cadena
            stringCopy(&cadena[i], &cadena[i + 1]);
            i--;
            longitud--;
        }
    }
}
