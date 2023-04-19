#include <stdio.h>
#include "../main/misFunciones.h"
void normalizarQuitarBlancos(char *cadena) {
    int i;
    int longitud = strlen(cadena);

    for (i = 0; i < longitud; i++) {
        if (cadena[i] == ' ') {
            // Eliminar el espacio en blanco de la cadena
            strcpy(&cadena[i], &cadena[i + 1]);
            i--;
            longitud--;
        }
    }
}
