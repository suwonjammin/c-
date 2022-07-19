#include <stdio.h>
int main()
{
	int n;
	int i=1;
	printf("ют╥б:");
	scanf("%d",& n);
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d",i);
		}
		else
		{
			printf("%d",i*(-1));
		}
		i++;
	
	}
	return 0;
}
