#include <stdio.h>
#include "../main/misFunciones.h"
void normalizarPrimeraMayuscula(char *cadena) {
    int i;
    int longitud = strlen(cadena);

    if (longitud > 0) {
        // Convertir primera letra a may�scula
        cadena[0] = toupper(cadena[0]);

        // Convertir las letras siguientes a min�scula
        for (i = 1; i < longitud; i++) {
            cadena[i] = tolower(cadena[i]);
        }
    }
}
