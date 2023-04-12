int valorNumerico(char* vec) {
    int resultado = 0;
    char* px = vec;

    while (*px != '\0') {
        int digito = *px - '0'; // Convertir el caracter a su valor numérico
        resultado = resultado * 10 + digito; // Multiplicar por 10 y sumar el valor del dígito
        px++; // Avanzar al siguiente caracter en la cadena
    }

    return resultado;
}
