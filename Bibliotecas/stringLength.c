unsigned int stringLength ( const char *s)
{
    unsigned contador = 0;

    while(*s != '\0')
    {
        contador++;
        s++;
    }

    return(contador);
}
