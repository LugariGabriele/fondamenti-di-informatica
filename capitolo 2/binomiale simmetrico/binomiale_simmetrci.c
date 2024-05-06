 double fattoriale(unsigned int a){
  double fat=1;
    for (unsigned int i = 1; i <= a; i++)
    {
            fat*=i;
    }
    return fat;
}

extern double binomialesimmetrico(unsigned int n,unsigned int h,unsigned int k){
            return fattoriale(n)/(fattoriale(h)*fattoriale(k));
}
int main(){
    double d;
    d= binomialesimmetrico(1,2,3);

}