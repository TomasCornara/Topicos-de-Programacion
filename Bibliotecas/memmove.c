#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* memeMove (void*,const void*,size_t);

int main (){
    char* origen = "prueba";
    char* destino = calloc(10,sizeof(char));


    printf("%s %s \n",origen,destino);

    memeMove(destino,origen,strlen(origen)+1);

    printf("%s %s \n",origen,destino);

    free(destino);

    return(0);
}

void* memeMove (void* dest, const void* org, size_t bytes){
    const char* origen = (char*)org;
    char* destino = (char*)dest;
    char* memInter = malloc(sizeof(origen));

    for(size_t i = 0 ; i < bytes ; i++, origen++,memInter++){
        *memInter = *origen;
    }

    memInter-= bytes;

    for(size_t i = 0; i < bytes ; i++,destino++,memInter++){
        *destino = *memInter;
    }

    free(memInter);
    return(destino);
}
