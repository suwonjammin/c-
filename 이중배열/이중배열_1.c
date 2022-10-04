#include <stdio.h>
int main()
{
	int ar1[3][4]={0};
	int ar2[ ][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int ar3[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d",ar1[i][j]);
		}
		
		printf("\n");
	}
	printf("\n");
	i=0;
	j=0;
	while(i<3)
	{
		while(j<4)
		{
			printf("%d",ar2[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	} 
	printf("\n");
	i=0;
	j=0;
	do{
		do	{
			printf("%d",ar3[i][j]);
			j++;
		}while(j<=3);
		j = 0;
		printf("\n");
		i++;
	}while(i<=2);
	
	
	return 0;
}
	
