#include <stdio.h>
#include <stdlib.h>

#define COL 4
#define FIL 4

int** CrearMatriz(int, int);
void LiberarMatriz(int**, int);
void ImprimirMatriz(int**, int, int);
int** multMatDin(int** ,int, int, int**,int,int,int**,int,int);

int main()
{
    int** matriz = CrearMatriz(FIL, COL); //Mat Multiplicando
    int** matriz1 = CrearMatriz(FIL, COL); //Mat Multiplicador
    int** matriz2 = CrearMatriz(FIL, COL); //Mat Resultado

    multMatDin(matriz,4,4,matriz1,4,4,matriz2,4,4);

    // Imprime la matriz
    ImprimirMatriz(matriz, FIL, COL);

    printf("\n");

    ImprimirMatriz(matriz2, FIL, COL);


    //Liberar las matrices
    LiberarMatriz(matriz, FIL);

    LiberarMatriz(matriz1, FIL);

    LiberarMatriz(matriz2, FIL);

    return 0;
}

int** CrearMatriz(int filas, int columnas)
{
    int** matriz = (int**)malloc(sizeof(int*) * filas);

    // Crea las filas
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = (int*)malloc(sizeof(int) * columnas);

        // Si no se puede asignar, hay que liberar lo anterior
        if (matriz[i] == NULL)
        {
            LiberarMatriz(matriz, i);
            return NULL;
        }

        // Carga la matriz con valores de 1 a N solo para probar
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = i * columnas + j;
        }
    }
    return matriz;
}

void LiberarMatriz(int** matriz, int filas)
{
    for (int i = 0; i < filas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

void ImprimirMatriz(int** matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int** multMatDin(int** multiplicando,int andoFil, int andoCol, int** matMultiplicador,int adorFil, int adorCol, int** matResult, int resulFil,int resulCol)
{
    //Primero Chequeo que columnas de multiplicando sea igual que cant de filas multiplicador

    if(andoCol != adorFil)
    {
        return(NULL);
    }

    //Segundo, chequeo que la matriz de resultado sea de N x M donde N son la cantidad de filas de multiplicando y M la cantidad de columnas de multiplicador
    if(resulFil != andoFil || resulCol != adorCol)
    {
        return(NULL);
    }

    //Proceso de multiplicacion
    for(int i = 0; i < andoFil; i++)
    {
        for(int x = 0; x < adorCol; x++)
        {
            matResult[i][x] = 0; //Voy poniendo a la matriz en 0 por si no lo tuviese ya y no me altere el resultado

            for(int z = 0; z < andoCol; z++)
            {
                matResult[i][x] += multiplicando[i][z] * matMultiplicador[z][x];
            }
        }

    }

    //Devuelvo la direccion de la matriz resultado
    return(matResult);
}


