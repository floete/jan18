#include <stdio.h>

int main()
{
	int c;
	int inword = 0;
	while( (c=fgetc(stdin) ) != EOF )
	{
		if(c == ' ' || c == '\n' || c == '\t' )
		{
			printf("]\n");
			inword = 0;
		}
		else
		{
			if(inword == 0)
			{
				printf("[");
				inword = 1;
			}
			putchar(c);
		}
	}
	
	return 0;
}
