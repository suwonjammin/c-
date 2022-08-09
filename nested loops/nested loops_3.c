#include <stdio.h>
int main()
{
	int i,j ;
	for(i=0;i<=4;i++)
	{
		for(j=5-i;j<=5;j++ )
		{
			printf("%d",j);
		}
		printf("\n")	;
	}
	return 0;
}
