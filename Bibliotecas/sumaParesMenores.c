int sumaParesMenores(int numero)
{
    int contador=0, acumulador = 0;

    for(;contador < numero; contador += 2)
    {
        acumulador+= contador;
    }

    return(acumulador);
}
