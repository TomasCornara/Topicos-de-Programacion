#include "../main/misFunciones.h"
void eliminarTodas(int* vec, int* tam, int elemento) {
    int* px = vec;
    while(px < (vec + *tam)) {
        if(*px == elemento) {
            eliminar(vec, tam, (px - vec));
        } else {
            px++;
        }
    }
}

