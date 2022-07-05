#include <stdio.h>
int main()
{
	int num1,num2;
	printf("정수 2개를 입력");
	scanf("%d %d",&num1,&num2) ;
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

	return 0;
}


