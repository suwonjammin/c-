#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int arr[10];
	int i;
	int sum=0;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		
	arr[i]=rand()%10;
	
	}
	
	for(i=0;i<10;i++)
	{
		sum+=arr[i];
	}
	
	for(i=0;i<10;i++)
	{
		printf("arr[%d] : %d\n",i,arr[i]);
	}
	
	printf("sum : %d",sum);
	
	
	
	
	return 0;
}

