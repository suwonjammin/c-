#include <stdio.h>
int main()
{
	int num;
	
	printf("10000 �̸� �����Է�:");
	scanf("%d",&num);
	
	if(num<10)
	{
		printf("�� �ڸ� ��\n");
	
	 } 
	else if(num<100)
	{
		printf("�� �ڸ� ��\n");
	}
	else if(num<1000)
	{
		printf("�� �ڸ� ��\n");
	}
	else if(num<10000)
	{
		printf("�� �ڸ� ��\n");
	}
	else
	{
		printf("10000\n");
	}
	
	return 0;
 } 
