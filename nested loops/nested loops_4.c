#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=100;i++)
	{
		printf("%d : ",i);
		//��� ã��
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf("%d ",j);
			}
		} 
		printf("\n");
	}
	return 0;
}
