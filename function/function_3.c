#include <stdio.h>
int  ReverseNum(int n)
{
	int result=0;
	while(n>0)
	{
		result=result*10+n%10;
		n=n/10;
	}
	return result;
	
}
int main()
{
	printf("%d�� ������ ���� %d�Դϴ�.",12345,ReverseNum(12345));
	return 0;
}
