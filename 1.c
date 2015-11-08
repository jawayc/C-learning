#include <stdio.h>

int main(void)
{
	int c,last;
	last = ' ';
	while((c = getchar()) != EOF)
	{
		if(c != ' '&& c != '\t' && c != '\n' )
			putchar(c);
		else if(last != ' ' &&  last != '\t' && last != '\n')
		{
			putchar('\n');
		}
	last = c;
	}
	return 0;
}
