#include <stdio.h>
int main()
{
	int num1,num2;
	printf("���� 2���� �Է�");
	scanf("%d %d",&num1,&num2) ;
	if(num1>num2)
	{
		if(num1%num2==0)
		{
			printf("������ ������");
		}
		else
		{
			printf("������ ������������");
		}
		
	}
	else if(num2>num1)
	{
		if(num2%num1==0)
		{
			printf("������ ������");
		}
		else
		{
			printf("������ �������� ����");
		 } 
	}

	return 0;
}


