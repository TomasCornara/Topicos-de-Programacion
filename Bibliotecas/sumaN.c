int sumaPrimerosN(int numero)
    {
        int acumulador=0;
        for(; numero!=0; numero--)
        {
            acumulador+=numero;
        }
        return(acumulador);
    }
