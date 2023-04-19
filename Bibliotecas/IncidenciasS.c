unsigned int incidenciasS(char* puntero1, char* puntero2) {
    int contIncidencias = 0;

    while (*puntero1 != '\0') {
        char* ptr1 = puntero1;
        char* ptr2 = puntero2;
        int contadorPunt2 = 0;

        while (*ptr1 == *ptr2 && *ptr2 != '\0') {
            contadorPunt2++;
            ptr1++;
            ptr2++;
        }

        if (*ptr2 == '\0' && contadorPunt2 > 0) {
            contIncidencias++;
        }

        puntero1++;
    }

    return contIncidencias;
}
