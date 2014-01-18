#include <stdio.h>

int f()
{
	printf("f\n");
	return 1;
}


int g()
{
	printf("g\n");
	return 0;
}


int main()
{
	int a = 2;
	int b = 15;
	int c = ( f() | g() );
	int d = ( f() || g() );
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	
	// o—ÍF	a=2,b=15,c=15,d=1
	
	return 0;
}

