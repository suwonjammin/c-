#include <stdio.h>
int main()
{
	int arr[5];
	int sum=0;
	int i;
	
	for(i=0;i<=4;i++) 
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
	
}
