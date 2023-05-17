#ifndef MISFUNCIONES_H_INCLUDED
#define MISFUNCIONES_H_INCLUDED
#define TAMCOL 5

typedef struct
{
    int cociente,
        resto;
} resultDiv;

typedef struct {
    char nombre[31];
    char apellido[31];
    int dni;
    int edad;
    int telefono;
} alumno;


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
void eliminar(int*,int*,int); //ejercicio 24
void eliminarPrim(int*,int*,int); //ejercicio 25
void eliminarTodas(int*, int*, int); //ejercicio 26
int palindromo(char*, int); //ejercicio 27
int valorNumerico(char*); //Ejercicio 28

//Ejercicios de tarea
unsigned int incidencias(char*, char*); //incidencias sin solapamiento
unsigned int incidenciasS(char*, char*); // con solapamiento

//Ctype
char* stringCopy(char*, const char*); //strcpy
unsigned int stringLength ( const char*); //strlen
unsigned int stringCompare (const char*, const char*); //stcmp

//normalizacion
void normalizarPrimeraMayuscula(char *cadena);
void normalizarPuntoFinal(char *cadena);
void normalizarQuitarSimbolos(char *cadena);
void normalizarQuitarBlancos(char *cadena);

//Ejercicio Matrices
void MostrarDiagPpal(int[][TAMCOL]);
void MostrarDiagSec(int[][TAMCOL]);
void MostrarTrianSup(int[][TAMCOL]);
void MostrarDiagInf(int[][TAMCOL]);
void MostrarTriangulitoSup(int[][TAMCOL]);
void MostrarTriangulitoDer(int[][TAMCOL]);
void MostrarTriangulitoInf(int [][TAMCOL]);
void MostrarTriangulitoIzq(int [][TAMCOL]);
void RecorrerMatrizEnEspiral(int [][TAMCOL]);
void MultiplicarMatrices(int [][TAMCOL1], int [][TAMCOL2], int [][TAMCOL2]);

//Imprimir generico
void printGen(const void*, int, size_t, void (*)(const void*));
void printInt(const void*);
void printFloat(const void*);
void printChar(const void*);
void printStruct(const void*);

//Funciones de memoria dinamica
void* memoryCopy(void*,const void*, size_t);
void* memeMove (void*, const void*, size_t);

//Ejercicios Qsort + Struct

int comparar_alumnos_apellido_nombre(const void*, const void*);
int comparar_alumnos_dni(const void*, const void*);

#endif // MISFUNCIONES_H_INCLUDED
