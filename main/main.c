#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main() {
    char cadena[] = "12345";
    int valor = valorNumerico(cadena);
    printf("El valor numérico de la cadena '%s' es: %d\n", cadena, valor);
    return 0;
}
