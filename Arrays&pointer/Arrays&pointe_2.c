#include <stdio.h>

void PrintArray(int ar[]);
void InputData(int *p);

int main()
{
	int ar[20]={0};
	
	PrintArray(ar);
	InputData(ar);
	PrintArray(ar);
	
	return 0;
}

void PrintArray(int ar[])
{
	int i;
	for(i=0;i<20;i++)
	{
		printf("%d",ar[i]);
	}
}
void InputData(int *p)
{
	int i;
	for(i=0;i<20;i++)
	{
		scanf("%d",p+i);
	}
}
