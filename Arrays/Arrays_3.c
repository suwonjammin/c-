#include <stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int ar[4];
	int i;
	
	int count=0;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			ar[count]=i;
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		printf("ar[%d] : %d \n",i,ar[i]);
	}
	
	
	
	return 0;
}
