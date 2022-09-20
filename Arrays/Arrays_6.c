#include <stdio.h>
int main()
{
	int ar[10]={5, 2, 1, 5, 6, 7, 8, 9, 4, 2};
	int i, min = 0;
	min= ar[0];
	for(i = 0;i <= 9;i++)
	{
		if(min > ar[i])
		{
			min=ar[i];
		}
	}
	printf("%d",min);
	return 0;
}

