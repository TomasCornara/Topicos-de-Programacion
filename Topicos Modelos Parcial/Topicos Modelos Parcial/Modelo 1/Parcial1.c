/* Este es un ejercicio de practica para el parcial basado en el modelo 23/08/2007 com 06
No todas las consignas aplican al temario nuevo, asi que ignore el ejercicio de recursividad
y tambien re imagine el ejercicio sin 2 sin estructuras de datos -Debi haber incluido algo de memoria dinamica, se me olvido :c- */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char cod[11];
    char marca[10];
    char modelo[10];
    int aaaa;
    float prec;
} vehiculo;

void crearArchivo();
void imprimirArchivo(const char*);
void actPrecio(const char*,int);
void cargarVector(const char*, vehiculo*);
void imprimirVector(const void*,size_t,size_t,void(*)(const void*));
void funcImpStruct(const void*);
void imprimirEspacio(void);
int ordenarVector(const void*, const void*);
void impMayo10k(const void*,size_t, size_t,void(*)(const void*));


int main ()
{
    int x = -1;

    //Creo el archivo
    crearArchivo();


    //Lo leo e imprimo para chequear
    imprimirArchivo("inicial.bin");

    //Actualizo el precio para los autos de año X

    printf("Ingrese el annio de los autos que van a aumentar x1.25: ");
    scanf("%d",&x);
    while(x < 0 || x >= 2024)
    {
        printf("Ingrese un annio valido: ");
        scanf("%d",&x);
    }
    actPrecio("inicial.bin", x);

    //Lo leo e imprimo para chequear
    imprimirEspacio();
    imprimirArchivo("inicial.bin");


    //Cargo los registro a un vector
    vehiculo autos[8];
    cargarVector("inicial.bin", autos);

    imprimirEspacio();

    imprimirVector(autos,sizeof(autos[0]),8,funcImpStruct);
    qsort(autos,(sizeof(autos))/(sizeof(autos[0])),sizeof(autos[0]),ordenarVector);

    imprimirEspacio();

    imprimirVector(autos,sizeof(autos[0]),8,funcImpStruct);

    imprimirEspacio();

    impMayo10k(autos,sizeof(autos[0]),8,funcImpStruct);

    return(0);
}

void impMayo10k(const void* vector,size_t tam, size_t cant,void(*funcImpStruct)(const void*))
{
    for(const void* posFinal = vector + (tam*cant);
            vector != posFinal;
            vector+= tam)
    {
        if ((((vehiculo*)vector) -> prec) > 10000){
            funcImpStruct(vector);
            printf("\n");
        }
    }
}

int ordenarVector(const void* s1, const void* s2)
{
    const vehiculo* string1 = (const vehiculo*)s1;
    const vehiculo* string2 = (const vehiculo*)s2;

    int cmp = strcmp(string1->marca,string2->marca);

    if (cmp > 0)
    {
        return 1;
    }

    if (cmp < 0)
    {
        return -1;
    }

    if(!cmp)
    {
        cmp = strcmp(string1->modelo,string2->modelo);
        if (cmp > 0)
        {
            return 1;
        }

        if (cmp < 0)
        {
            return -1;
        }
    }
}

void imprimirEspacio()
{
    printf("\n\n\n \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n\n\n");
}

void imprimirVector(const void* vector,size_t tam, size_t cant,void(*funcImpStruct)(const void*))
{
    for(const void* posFinal = vector + (tam*cant);
            vector != posFinal;
            vector+= tam)
    {
        funcImpStruct(vector);
        printf("\n");
    }
}

void funcImpStruct(const void* vector)
{
    const vehiculo* miEstructura = (const vehiculo*)vector;
    printf("%s | %s | %s | %d | %.2f", miEstructura->cod, miEstructura->marca, miEstructura->modelo, miEstructura->aaaa, miEstructura->prec);
}

void cargarVector(const char* archivo, vehiculo* vector)
{
    FILE* pxFile = fopen(archivo, "rb");
    if (pxFile == NULL)
    {
        printf("Error al abrir el archivo\n");
        return;
    }
    vehiculo buffer;

    while (fread(&buffer, sizeof(vehiculo), 1, pxFile) == 1)
    {
        *vector = buffer;
        vector++;
    }

    fclose(pxFile);
}

void imprimirArchivo(const char* archivo)
{
    FILE* pxFile = fopen(archivo,"rb");
    if (pxFile == NULL)
    {
        printf("Error al abrir archivo\n");
        return;
    }

    vehiculo buffer;

    while(fread(&buffer,sizeof(buffer),1,pxFile) == 1)
    {
        printf("%s | %s | %s | %d | %.2f\n", buffer.cod,buffer.marca,buffer.modelo,buffer.aaaa,buffer.prec);
    }
    printf("\n\n");
    fclose(pxFile);
}

void crearArchivo()
{
    vehiculo misAutos[] =
    {
        {"AA1234BB", "Toyota", "Corolla", 2015, 15000.0},
        {"BB5678CC", "Honda", "Civic", 2018, 10000.0},
        {"CC9012DD", "Ford", "Mustang", 2020, 40000.0},
        {"DD3456EE", "Chevrolet", "Camaro", 2019, 35000.0},
        {"EE7890FF", "MB", "D-Class", 2017, 2000.0},
        {"FF2345GG", "BMW", "X5", 2016, 30000.0},
        {"GG6789HH", "MB", "C-Class", 2017, 25000.0},
        {"HH0123II", "Audi", "A4", 2019, 28000.0}
    };


    FILE* iniFile = fopen ("inicial.bin","wb");
    int copiados = fwrite(misAutos, sizeof(misAutos[0]),8,iniFile);
    if(copiados != sizeof(misAutos)/sizeof(misAutos[0]))
    {
        printf("Ha ocurrido un error, no se copiaron todos los datos \n");
    }

    fclose(iniFile);
}

void actPrecio(const char* archivo, int annio)
{
    FILE* pxArch = fopen("inicial.bin","r+b");
    if(pxArch == NULL)
    {
        printf("No fue posible abrir el archivo para actualizarlo. \n");
        return;
    }

    vehiculo buffer;

    while(fread(&buffer,sizeof(buffer),1,pxArch) == 1)
    {
        if (buffer.aaaa == annio)
        {
            buffer.prec *= 1.25;

            fseek(pxArch, -sizeof(buffer), SEEK_CUR);
            fwrite(&buffer,sizeof(buffer),1,pxArch);
            fseek(pxArch, sizeof(buffer), SEEK_CUR);
        }

    }

    fclose(pxArch);
}
