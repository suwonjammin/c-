#include <stdio.h>
int main()
{
	int ar[10]={10,20,30,40,50,60,70,80,90,100};
	int br[10];
	int i;
	for(i=0;i<=9;i++)
	{
		
		br[i]=(i+1)*10;
		
	}
	for(i=0;i<=9;i++)
	{
		printf("br[%d] : %d \n",i,br[i]);
	}
	return 0;
 } 
