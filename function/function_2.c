# include <stdio.h>
void Divisor(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	
}
int main()
{
  	Divisor(12);
	return 0;
}
