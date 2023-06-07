#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[10];
    int edad;
    int dni;
} persona;

int main()
{

    // EMULO LO QUE RECIBIRIA
    // Inicializo un vector de struct persona con su respectiva info
    persona personas[] = {
        {"Mario", 10, 10102030},
        {"Denise", 20, 40405060},
        {"Pablo", 130, 70708090}
    };

    // Creo el archivo con longitud fija y despues variable
    FILE * lotePrueba = fopen("pruebaFija.txt","wt");
    if (lotePrueba == NULL){
        printf("No se pudo CREAR el archivo fijo \n");
        return(1);
    }

    //Grabo en ese archivo personas
    for (int i = 0; i < 3; i++) {
        fprintf(lotePrueba, "%-10s%-3d%-9d\n", personas[i].nombre, personas[i].edad, personas[i].dni);
    } //El formato son: 10 caracteres para el nombre, 3 para la edad y 9 para el apellido. Por ej: "nombre   123 41999833"

    //Cierro ese archivo
    fclose(lotePrueba);


    //Creo el archivo de longitud variable
    lotePrueba = fopen("pruebaVariable.txt","wt"); //Notese que reutilizo el puntero anterior
    if (lotePrueba == NULL){
        printf("No se pudo CREAR el archivo variable \n");
        return(2);
    }

    //Grabo en ese archivo a las personas
    for (int i = 0; i < 3; i++) {
        fprintf(lotePrueba, "%s,%d,%d\n", personas[i].nombre, personas[i].edad, personas[i].dni);
    } // Aca el formato es separado por comas

    //Cierro el archivo
    fclose(lotePrueba);

    //DESDE ACA PARA ABAJO, HAGO LO QUE HUBIESE HECHO SI HUBIESE RECIBIDO a pruebaVariable.txt Y A pruebaFija.txt

    FILE * archivoTexto;
    FILE * archivoBinario;
    persona buffer;


    //PRIMERO FORMATO FIJO
    //Abro el archivo que voy a leer
    archivoTexto = fopen("pruebaFija.txt","rt");
    if (archivoTexto == NULL){
        printf("No fue posible ABRIR el archivo con formato fijo \n");
        return(3);
    }

    //Abro el archivo que voy a escribir
    archivoBinario = fopen("resultadoFijo","wb");
    if (archivoBinario == NULL){
        printf("No fue posible CREAR el archivo resultado fijo \n");
        return(4);
    }


    //Leo el archivo y lo paso al binario
    while(fscanf(archivoTexto,"%10s%d%d",buffer.nombre,&buffer.edad,&buffer.dni) == 3){
        fwrite(&buffer,sizeof(persona),1,archivoBinario);
    }


    //Cierro los archivo
    fclose(archivoBinario);
    fclose(archivoTexto);

    //SEGUNDO, FORMATO VARIABLE
    archivoTexto = fopen("pruebaVariable.txt","rt");
    if (archivoTexto == NULL){
        printf("No fue posible ABRIR el archivo con formato variable \n");
        return(5);
    }

    //Abro el archivo que voy a escribir
    archivoBinario = fopen("resultadoVariable","wb");
    if (archivoBinario == NULL){
        printf("No fue posible CREAR el archivo resultado variable \n");
        return(6);
    }

    //Paso al archivo
    while (fscanf(archivoVariable, "%[^,],%d,%d\n", buffer.nombre, &buffer.edad, &buffer.dni) == 3) {
        fwrite(&buffer, sizeof(persona), 1, archivoBinario);
    }


    //Cierro los archivo
    fclose(archivoBinario);
    fclose(archivoTexto);

    printf("Los archivos se han copiado exitosamente.\n");
    return 0;
}



