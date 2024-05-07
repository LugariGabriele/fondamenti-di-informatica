
#include <stdlib.h>


int mcd(int a, int b) {
	if (b == 0) {
		return abs(a);
	}
	else {
		return mcd(b, a % b);
	}
}


int ammette_soluzioni(int a, int b,int c) {
	//ax+by=c
	if (a==0 && b==0)
	{
		if (c==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	
	}

	if (c%mcd(a,b)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}


}