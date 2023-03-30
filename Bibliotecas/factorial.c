unsigned int factorial(unsigned int numero)
{
    int resultado = 1;

    for(;numero!= 0; numero--)
    {
        resultado *= numero;
    }
    return(resultado);
}
