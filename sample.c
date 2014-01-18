#include <stdio.h>

int main()
{
	int a = 2;
	int b = 15;
	int c = (a | b);
	int d = (a || b);
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	
	// o—ÍF	a=2,b=15,c=15,d=1
	
	return 0;
}

