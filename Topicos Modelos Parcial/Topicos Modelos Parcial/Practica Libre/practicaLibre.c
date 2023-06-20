#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE* input = fopen("input.txt","rt");
    if(input == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return(1);
    }

    char buffer[100];
    char buffer2[100];
    int edad,contador = 0, acumulador = 0;

    while(fscanf(input,"%[^,],%d,%[^,],\n", buffer, &edad, buffer2) == 3)
    {
        acumulador += edad;
        contador++;
        printf("Nombre: %s - Edad: %d - Pais: %s\n", buffer, edad, buffer2);
    }

    fclose(input);

    printf("La sumatoria de las edades es %d la cantidad de registros %d. El promedio %.2f",acumulador,contador,(float)acumulador/(float)contador);
    return(0);
}
