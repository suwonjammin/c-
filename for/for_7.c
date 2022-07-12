#include <stdio.h>
int main()
{
	float f;
	float i;
	printf("실수입력:");
	scanf("%f",&f);
	for(i=0;i<=f;i+=0.3)
	{
	 printf("%f\n",i);
	} 
	return 0;
}
