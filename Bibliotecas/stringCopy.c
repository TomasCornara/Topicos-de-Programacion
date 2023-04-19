char* stringCopy(char* destino, const char* origen)
{
    char *temp = destino;
    while (*origen != '\0' && *destino != '\0')
    {
        *destino= *origen;
        destino ++;
        origen ++;
    }
    *destino = '\0';
    return(temp);
}
