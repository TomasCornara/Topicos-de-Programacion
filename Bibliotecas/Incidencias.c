unsigned int incidencias(char* puntero1, char* puntero2) {
    int contIncidencias = 0, contSuperposicion = 0, contadorPunt2 = 0;

    while (*puntero1 != '\0') {
        if (*puntero1 == *puntero2) {
            contadorPunt2++;
            puntero2++;
            if (*puntero2 == '\0') {
                puntero2 -= contadorPunt2;
                contIncidencias++;
                contadorPunt2 = 0;
            }
        }
        else {
            puntero2 -= contadorPunt2;
            contadorPunt2 = 0;
        }
        puntero1++;
    }

    return contIncidencias;
}
