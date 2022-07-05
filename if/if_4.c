#include <stdio.h>
int main()
{
	float num3;
	printf("실수하나를 입력");
	scanf("%f",&num3);
	if(num3<0)
	{
		printf("%f",num3*-1);
	} 
	else
	{
		printf("%f",num3*1);
	}
	return 0;
}
