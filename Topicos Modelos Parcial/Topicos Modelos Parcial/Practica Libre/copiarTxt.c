#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *input, *output;
    char buffer[100];

    input = fopen("input.txt","rt");
    if (input == NULL){
        printf("Error al abrir el archivo. Puede que no exista o no tenga acceso.\n");
        return(1);
    }

    output = fopen("output.txt","wt");
    if (output == NULL){
        printf("Error al querer escribir el archivo.\n");
        return(2);
    }

    while(fgets(buffer,sizeof(buffer),input)){
        fprintf(output,"%s",buffer);
    }


    fclose(input);
    fclose(output);

    return(0);
}
