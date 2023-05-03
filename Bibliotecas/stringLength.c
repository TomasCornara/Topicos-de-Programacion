unsigned int stringLength ( const char *s)
{
    unsigned cantidad = 0;

    while(*s)
    {
        cantidad++;
        s++;
    }

    return(cantidad);
}
