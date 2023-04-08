void eliminar(int* vector,int* tam,int pos)
{
    int *px = vector + pos;
    while(px+1 <= (vector+ *tam))
    //while(px < (vector + (*tam) - 1))
    {
        *px = *(px+1);
        px++;
    }
    (*tam)--;
}
