#include <stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i=80;i>1;i/=2)
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
