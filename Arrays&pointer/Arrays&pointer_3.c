#include <stdio.h>
#include <stdlib.h>

void InputData(int *p);
void PrintArray(int ar[]);
int GetMax(int *ar);
int GetMin(int *ar);

int main()
{
	int ar[10]={0};   
	int max,min;
	
	PrintArray(ar);
	InputData(ar);
	max=GetMax(ar);
	min=GetMin(ar);
	PrintArray(ar);
	
	printf("최대값 : %d\n",max);
	printf("최소값: %d\n",min);
	
	return 0;
}

void InputData(int *p)
{
	int random;
	int i;
	
	for(i=1;i<10;i++)
	{
		random=rand()%100+1;
		*(p+i)=random;
		
	}
	
}
void PrintArray(int ar[])
{
	int i;
	for(i=1;i<10;i++)
	{
		printf("%d\n",ar[i]);
	}
}
int GetMax(int *ar)
{
	int i;
	int max=0;
	max=ar[i];
	for(i=1;i<10;i++)
	{
		if(ar[i]>max)
		{
			max=ar[i];
		}
	}
	
	return max;
}
int GetMin(int *ar)
{
	int i;
	int min=0;
	min=ar[i];
	for(i=1;i<10;i++)
	{
		if(ar[i]<min)
		{
			min=ar[i];
		}
	}
	
	return min;
}

