#include <stdio.h>
#include <stdlib.h>

int miMerge(char* px1, char* px2, char* px3){
    FILE *archivo1 = fopen(px1,"rt"),
         *archivo2 = fopen(px2,"rt"),
         *archivo3 = fopen(px3,"wt");

    if(archivo1 == NULL ||
       archivo2 == NULL ||
       archivo3 == NULL)
    {
        printf("No se ha podido abrir los archivos.\n");
        return(-1);
    }

    int contador = 0;
    char buffer;

    while((buffer = fgetc(archivo1)) != EOF){
        fputc(buffer,archivo3);
        contador++;
    }

    fputc(10,archivo3);

    while((buffer = fgetc(archivo2)) != EOF){
        fputc(buffer,archivo3);
        contador++;
    }

    fclose(archivo1);
    fclose(archivo2);
    fclose(archivo3);

    return(contador);
}


