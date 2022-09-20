#include <stdio.h>
int main()
{
	char str[100]="my name is jiho";//->마지막에 자동으로 0을  넣어줌 
	
	int i=0;
	while(str[i]!=0)
	{
		printf("%c",str[i]);
		i++;
	 } 
	 return 0;
}
