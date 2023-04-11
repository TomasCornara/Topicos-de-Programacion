#include "../main/misFunciones.h"
void eliminarPrim(int* vec, int* tam, int elemento) {
    int* px = vec;
    while(px < (vec + *tam) && *px != elemento) {
        px++;
    }
    eliminar(vec, tam, (px - vec));
}
