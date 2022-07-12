#include <stdio.h>
int main()
{
	int n;
	int i;
	int sum=0;
	printf("정수 하나 입력:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	} 
	printf("%d",sum);
	return 0;
}
