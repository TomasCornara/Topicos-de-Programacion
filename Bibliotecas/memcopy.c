#include <stdio.h>
#include <stdlib.h>

/*void* memoryCopy(void*,const void*, size_t);

int main() {
    char* original = "Hola, Mundo!";
    char* copia = malloc(strlen(original) + 1);

    // Copiamos el contenido de la cadena original en la copia
    memoryCopy(copia, original, strlen(original) + 1);

    // Imprimimos la cadena original y la copia
    printf("Original: %s\n", original);
    printf("Copia: %s\n", copia);

    // Liberamos la memoria de la copia
    free(copia);

    return 0;
}*/

void* memoryCopy(void* dest,const void* org, size_t cant){

    char* origen = (char*)org;
    char* destino = (char*)dest;
    const char* pxFin = ((char*)origen) + cant;

    for(;origen != pxFin; origen++, destino++){
        *destino = *origen;
    }

    return(dest);
}

/*
void* memCopy (void* destino, const void* origen, size_t cant){

    const char* org = (char*)origen;
    char* dest = (char*)destino;


    for(;cant !=0;cant--,org++,dest++){
        *dest = *org;
    }

    return(destino);
}
*/

/*void* memoryCopy(void* dest, const void* origen, size_t cant){
    const char* origen_char = (const char*) origen;
    char* dest_char = (char*) dest;

    for(size_t i = 0; i < cant; i++){
        *(dest_char + i) = *(origen_char + i);
    }

    return(dest);
}
*/
