#include <stdio.h>
int sum(int n)
{
	int i;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	printf("1���� %d������ ���� %d �Դϴ�.",10,sum(10));
	return 0;
 } 
