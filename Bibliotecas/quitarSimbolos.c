#include <stdio.h>
#include "../main/misFunciones.h"
void normalizarQuitarSimbolos(char *cadena) {
    int i;
    int longitud = strlen(cadena);

    for (i = 0; i < longitud; i++) {
        if (!isalpha(cadena[i]) && cadena[i] != ' ') {
            // Eliminar el símbolo de la cadena
            strcpy(&cadena[i], &cadena[i + 1]);
            i--;
            longitud--;
        }
    }
}
