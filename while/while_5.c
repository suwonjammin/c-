
/*#include <stdio.h>
int main()
{
	int i=1;
	int n,m,j,i;
	
	printf("10������ �ڿ��� �Է�:");
	scanf("%d",&n) ;
	while(j<=n)
	{
		i=1;
		while(i<=n)
		{
			printf("%d",i);
			i++;
		}
		printf("\n");
		j++ ;
	}
	return 0;
}
*/


#include <stdio.h>
int main()
{
	
	int n,m,j,i;
	
	printf("10������ �ڿ��� �Է�:");
	scanf("%d",&n) ;
	for(j=1;j<=n;j++)
	{
		
		for(i=1;i<=n;i++)
		{
			printf("%d",i);
			
		}
		printf("\n");
		
	}
	return 0;
}
