void insertarElemento(int *vector, int tam, int posInsercion, int valorAInsertar) {
    tam--;

    for (; vector + tam > vector + posInsercion; tam--) {
        *(vector + tam) = *(vector + tam - 1);
    }

    *(vector + posInsercion) = valorAInsertar;
}
