#include <stdio.h>
int main()
{
	int n;
	int i;
	int sum=0;
	printf("���� �ϳ� �Է�:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	} 
	printf("%d",sum);
	return 0;
}
