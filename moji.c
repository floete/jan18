/*
	�󔒂���s��������A����܂ł̓��͂��u���P�b�g([])����
	�o�͂���v���O�����B
	
*/
#include <stdio.h>
#define BUF_SIZE 256

int main()
{
	int c;
	char buf[BUF_SIZE];
	int bufCount = 0;
	
	while( (c = fgetc(stdin) ) != EOF )
	{
		if( c == ' ' || c == '\n' || c == '\t' )
		{
			if(bufCount == 0)
			{
				continue;
			}
			buf[bufCount] = '\0';
			printf("[%s]\n",buf);
			bufCount = 0;
			buf[0] = '\0';
		}
		else
		{
			buf[bufCount] = c;
			bufCount++;
		}
	}
	
	return 0;
}

