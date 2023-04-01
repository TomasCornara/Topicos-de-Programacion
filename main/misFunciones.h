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
int sumaParesN(int numero); //ejercicio 11

#endif // MISFUNCIONES_H_INCLUDED
