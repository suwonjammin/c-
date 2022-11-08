#include <stdio.h>


int main()
{
	char c;
	c=getchar();
	while(c!="/n")
	{
		if('A'<=c&&'Z'>=c)
		{
			putchar(c);
		}
		else
		{
			putchar(c-32);
		}
		
		c=getchar();
	}
	return 0;
}
