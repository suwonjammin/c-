#include <stdio.h>
int main()
{
	int i;
	int n;
	
	printf("정수 입력:");
	scanf("%d",&n) ;
	for(i=n*-1;i<=n;i++)
	{
		printf("%d",i);
		
	}
	return 0;
}
