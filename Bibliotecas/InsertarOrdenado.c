void insertarOrdenado(int* vector,int tam,int valorAInsertar)
{
    while(valorAInsertar < *(vector+tam))
    {
        tam--;
        *(vector + tam) = *(vector + tam - 1);
    }

    *(vector + tam) = valorAInsertar;
}

