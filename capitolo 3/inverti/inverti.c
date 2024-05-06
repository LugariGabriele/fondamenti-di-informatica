
unsigned int inverti(unsigned int i){
    // inverte le cifre del numero non negativo
    unsigned int res=0;
    while (i>0)
    {
        res = res *10 +i%10;
        i/=10;
    }
    return res;
}

int main (){
    unsigned int i;
    i=inverti(123);
}