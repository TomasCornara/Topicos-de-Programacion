#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE* input = fopen("input.txt","rt");
    if(input == NULL){
        printf("No se ha podido abrir el archivo.\n");
        return(1);
    }

    int contador = 0;
    char buffer[100];

    while(fscanf(input,"%s",&buffer) == 1){
        contador++;
    }

    printf("El numero de palabras en el archivo es de %d.\n",contador);


    return(0);
}
