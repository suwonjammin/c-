#include <stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			printf("%d",i+1-i);
		}
		else
		{
			printf("%d",i-1-i);
		}
	}
	return 0;
}

