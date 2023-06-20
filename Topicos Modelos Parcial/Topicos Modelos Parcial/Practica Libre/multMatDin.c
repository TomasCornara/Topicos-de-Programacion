#include <stdio.h>
#include <stdlib.h>
#define CANTFILAS 25
#define CANTCOL 25

int** crearMatriz(int**,int,int);
void freeMat(int**,int,int);
void addRanVal(int**,int,int);
void multMatDin(int**,int,int,int**,int,int,int**);
void prtMat(int**,int,int);



int main (){
    //Creo la PRIMER Matriz (Multiplicando)
    int** matriz1 = malloc(CANTFILAS * sizeof(int*));
    if (crearMatriz(matriz1,CANTFILAS,CANTCOL) == NULL){
        printf("Error al crear la PRIMER matriz.\n");
        return(1);
    };

    //Creo la SEGUNDA matriz (Multiplicador)
    int** matriz2 = malloc(CANTFILAS * sizeof(int*));
    if (crearMatriz(matriz2,CANTFILAS,CANTCOL) == NULL){
        printf("Error al crear la SEGUNDA matriz.\n");
        return(2);
    };

    //Creo la TERCER matriz (Resultado)
    int** matriz3 = malloc(CANTFILAS * sizeof(int*));
    if (crearMatriz(matriz3,CANTFILAS,CANTCOL) == NULL){
        printf("Error al crear la TERCER matriz.\n");
        return(3);
    };


    //Cargo valores a la PRIMER matriz
    addRanVal(matriz1,CANTFILAS,CANTCOL);
    prtMat(matriz1,CANTFILAS,CANTCOL);

    //Cargo valores a la SEGUNDA matriz
    addRanVal(matriz2,CANTFILAS,CANTCOL);
    prtMat(matriz2,CANTFILAS,CANTCOL);

    //Hago la multiplicacion de PRIMERA x SEGUNDA en TERCERA
    multMatDin(matriz1,CANTFILAS,CANTCOL,matriz2,CANTFILAS,CANTCOL,matriz3);

    //Imprimo la TERCERA
    prtMat(matriz3,CANTFILAS,CANTCOL);

    //Libero la memoria
    freeMat(matriz1,CANTFILAS,CANTCOL);
    freeMat(matriz2,CANTFILAS,CANTCOL);
    freeMat(matriz3,CANTFILAS,CANTCOL);


    return(0);
}

//////////////////////////////////////////////////////////////////

int** crearMatriz(int** fila,int filas, int col){
    for(int x = 0; x < filas; x++){
        fila[x] = calloc( col , sizeof(fila[0]) );
        if (fila[x] == NULL){
            freeMat(fila,x,0);
            printf("Error creando columnas de la matriz\n");
            break; //Rompo el ciclo para no seguir pidiendo memoria
        }
    }
    return(fila);
}

///////////////////////////

void freeMat(int** fila, int fil, int col) {
    for (int x = 0; x < fil; x++) {
        free(fila[x]);
    }
    free(fila);
}

///////////////////////////

void addRanVal(int** matriz, int fil, int col){
    int z = 0;
    for(int x = 0; x < fil; x++){
        for(int y = 0; y < col; y++){
            matriz[x][y] = z;
            z++;
        }
    }
}

///////////////////////////

void multMatDin(int** multiplicando, int andoFIL, int andoCOL, int** multiplicador, int adorFIL, int adorCOL, int** result){
    if(andoCOL != adorFIL){
        printf("No es posible realizar la multiplicacion de estas matrices.\n");
        return;
    }

    for(int x = 0; x < andoFIL; x++){
        for(int y = 0; y < andoCOL; y++){
            for(int z = 0; z < adorCOL; z++){
                result[x][y] += multiplicando[x][z] * multiplicador[z][y];
            }
        }
    }
}

///////////////////////////

void prtMat(int** matriz,int fil,int col){
    printf("\n\n");
    for(int x = 0; x < fil; x++){
        //Imprimo valores
        for(int y = 0; y < col; y++){
            printf("|%d|",matriz[x][y]);
        }
        printf("\n");
    }
}

