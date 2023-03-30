unsigned fibonacci(unsigned int numero)
{
    int anterior = 1, actual = 1, intermedio;

    while ( numero > actual)
    {
        intermedio = actual;
        actual = intermedio + anterior;
        if ( actual == numero )
        {
            return(1);
        }
        anterior = intermedio;
    }
    return(0);
}
