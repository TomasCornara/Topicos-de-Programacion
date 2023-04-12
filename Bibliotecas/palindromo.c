int palindromo(char *vec, int tam) {
    char *px = vec;
    char *py = vec + tam - 1;

    while (px < py && *px == *py) {
        px++;
        py--;
    }

    return(px >= py ? 1 : 0);
}

