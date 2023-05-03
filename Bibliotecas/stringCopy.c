char* stringCopy(char* destino, const char* origen)
{
    char *temp = destino;
    while (*origen && *destino)
    {
        *destino= *origen;
        destino ++;
        origen ++;
    }
    *destino = 0;
    return(temp);
}
