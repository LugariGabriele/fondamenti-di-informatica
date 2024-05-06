double potenza(double esponente, double num){
    double potenza =1;
    for (double i = 0; i < esponente; i++)
    {
        potenza *=num;
    }
    return potenza;
}
double fattoriale(double num){
    double res = 1;
    for (double i = 2; i < num; i++)
    {
        res *= i;
    }
    return res;
}

extern double coseno(double x){
    double n=0.0;
    double cosx=1;
    while (1)
    {
        cosx+= ((potenza(n,-1))/(fattoriale(2*n)))*potenza(2*n,x);
        n++;
    }
    return cosx;
}