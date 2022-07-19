#include <stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i=15;i>0;i-=4)
	{
		if(i!=15)
		{
			i+=3;
		}
		sum+=1;
		
		
	}
	printf("%d",sum);
	return 0;
}
