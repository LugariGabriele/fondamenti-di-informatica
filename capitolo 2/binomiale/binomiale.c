 double fattoriale(unsigned int a){
  double fat=1;
    for (unsigned int i = 2; i <= a; i++) // dato che 0 e 1! danno 1
    {
            fat*=i;
    }
    return fat;
}

 double binomiale(unsigned int n,unsigned int k){
    double res;
    if (n==0||k>n)
    {
        return -1;
    }
    else
    {
         res = (fattoriale (n))/(fattoriale(k)*(fattoriale(n-k)));
        return res;
    }
    
}


int main(){
    double d;
    d= binomiale(1,0);
    d= binomiale(0,1);

}