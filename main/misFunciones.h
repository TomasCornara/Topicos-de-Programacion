#ifndef MISFUNCIONES_H_INCLUDED
#define MISFUNCIONES_H_INCLUDED

typedef struct
{
    int cociente,
        resto;
} resultDiv;

// Unidad 1
unsigned int factorial(unsigned int); // ejercicio 1
unsigned int combinatorio(unsigned int, unsigned int); //ejercicio 2
float eAlaX (unsigned int, float); //ejercicio 3
float raizCuadrada(unsigned int, float); //ejercicio 4
unsigned fibonacci(unsigned int); //Ejercicio 5. Devuelve 0 si es falso, uno si es verdadero
float seno(float, float); //Ejercicio 6
void perfecto(int); //ejercicio 7
int multiplicacion (int ,int); //ejercicio 8
resultDiv dividir(int, int); //ejercicio 9
int sumaPrimerosN(int); //ejercicio 10
int sumaParesN(int); //ejercicio 11
int sumaParesMenores(int); //ejercicio 12
void primo(int); // ejercicio 13

//Ejercicios vectores
void insertarElemento(int*, int, int, int); //ejercicio 22
void insertarOrdenado(int*,int,int); //ejercicio 23
void eliminar(int*,int,int); //ejercicio 24

#endif // MISFUNCIONES_H_INCLUDED
