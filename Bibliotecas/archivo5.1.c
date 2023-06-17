#include <stdio.h>
#include <stdlib.h>
int abrirArchivo (const char* archivo, int mostrarError)
{
    FILE* pxArchivo = fopen(archivo,"r");
    if(pxArchivo == NULL || mostrarError == 1)
    {
        fprintf(stdout, "error al abrir el archivo\n");
        return(1);
    }

    fclose(abrirArchivo);

    return(mostrarError);
}
