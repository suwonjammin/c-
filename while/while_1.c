#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("자연수 하나 입력:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			printf("%d",i) ;
		}
	}
	return 0;
}
