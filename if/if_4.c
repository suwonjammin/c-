#include <stdio.h>
int main()
{
	float num3;
	printf("�Ǽ��ϳ��� �Է�");
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
