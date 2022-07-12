#include <stdio.h>
int main()
{
	int a;
	printf("하나의 정수 입력: ");
	scanf("%d",&a);
	if(a%2==0&&a%3==0)
	{
		printf("2,3의 공배수입니다");
		
	 } 
	else
	{
		printf("2,3의 공배수가 아닙니다");
	}
	return 0 ;
 } 
