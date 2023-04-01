int sumaParesN(int numero)
    {
        int acumulador=0;
        numero = (numero % 2 == 0)? numero: numero -1;
        for(; numero!=0; numero-=2)
        {
            acumulador+=numero;
        }
        return(acumulador);
    }
