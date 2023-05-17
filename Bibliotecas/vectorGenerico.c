#include <stdio.h>
#include <stdlib.h>

/* int main() {
    int intVector[] = {1, 2, 3, 4, 5};
    float floatVector[] = {1.5, 2.7, 3.1, 4.9, 5.2};
    char charVector[] = {'H', 'e', 'l', 'l', 'o'};
    t_persona structVector[] = {
        {1, "John", 25},
        {2, "Jane", 30},
        {3, "Alice", 35},
        {4, "Bob", 40},
        {5, "Eve", 45}
    };

    printf("Printing intVector:\n");
    printGen(intVector, sizeof(intVector) / sizeof(int), sizeof(int), printInt);

    printf("\nPrinting floatVector:\n");
    printGen(floatVector, sizeof(floatVector) / sizeof(float), sizeof(float), printFloat);

    printf("\nPrinting charVector:\n");
    printGen(charVector, sizeof(charVector) / sizeof(char), sizeof(char), printChar);

    printf("\nPrinting structVector:\n");
    printGen(structVector, sizeof(structVector) / sizeof(t_persona), sizeof(t_persona), printStruct);

    return 0;
}*/

void printGen(const void* vec, int cantElem, size_t tamyo, void(*fncImp)(const void*))
{
    const void* posFinal = vec + (cantElem*tamyo);
    for(; vec != posFinal; vec+= tamyo){
        fncImp(vec);
        printf("\n");
    }
}

void printInt (const void* vector){
    printf("%d",*(int*)vector);
}

void printFloat(const void* vector){
    printf("%.2f",*(float*)vector);
}

void printChar(const void* vector){
    printf("%c",*(char*)vector);
}

void printStruct(const void* vector){
    printf("ID: %d NOMBRE: %s EDAD: %d",((t_persona*)vector)->id,((t_persona*)vector)->nombre,((t_persona*)vector)->edad);
}
