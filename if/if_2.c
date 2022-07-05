#include <stdio.h>
int main()
{
	int num; 
	printf("정수 하나를 입력:"); 
	scanf("%d",&num);

	if(num>0)
	{
		printf("양수");
	}
	else
	{
		printf("음수");
	 } 
    if(num%2==0)
	{
		printf("짝수");
	 } 
    else
	{
		printf("홀수");
	 } 
	if(num%3==0)
	{
		printf("3의배수");
	 } 
	else
	{
		printf("3의 배수가 아님");
	 } 
	int num1,num2;
	printf("정수 2개를 입력");
	scanf("%d","%d",&num1,num2) ;
	if(num1>num2)
	{
		if(num1%num2==0)
		{
			printf("나누어 떨어짐");
		}
		else
		{
			printf("나누어 떨어지지않음");
		}
		
	}
	else if(num2>num1)
	{
		if(num2%num1==0)
		{
			printf("나누어 떨어짐");
		}
		else
		{
			printf("나누어 떨어지지 않음");
		 } 
	}
int num3;
printf("실수하나를 입력");
	scanf("%d",&num3);
	if(num3<0)
	{
		printf(num3*-1);
	} 
	return 0;
}

