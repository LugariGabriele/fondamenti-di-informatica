extern double semifattoriale(char n){
    if (n<0)
    {
        return -1;
    }
    else if (n==0||n==1)
    {
        return 1;
    }
    else{
        double ret=1;
        for (; n>1;n-=2)
        {
            ret*=n;
        }
        return ret;
    }
}