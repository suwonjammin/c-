#include <stdio.h>
int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		if(i%2==1)
		{
			printf("%d",(i+1)*-1);
		}
		else
		{
			printf("%d",i+1);
		}
	}
	return 0;
}
