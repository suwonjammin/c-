#include <stdio.h>
int main()
{
	int num; 
	printf("���� �ϳ��� �Է�:"); 
	scanf("%d",&num);

	if(num>0)
	{
		printf("���");
	}
	else
	{
		printf("����");
	 } 
    if(num%2==0)
	{
		printf("¦��");
	 } 
    else
	{
		printf("Ȧ��");
	 } 
	if(num%3==0)
	{
		printf("3�ǹ��");
	 } 
	else
	{
		printf("3�� ����� �ƴ�");
	 } 
	int num1,num2;
	printf("���� 2���� �Է�");
	scanf("%d","%d",&num1,num2) ;
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
int num3;
printf("�Ǽ��ϳ��� �Է�");
	scanf("%d",&num3);
	if(num3<0)
	{
		printf(num3*-1);
	} 
	return 0;
}

