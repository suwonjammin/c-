#include <stdio.h>
int main()
{
	char str[ ]="Coding is computer progra";
	int i=0;
	int sum=0;
	while(str[i]!=0)
	 {
	 	i++;
	 }
	printf("문자열의 길이:%d",i);
	int j;
	for(j=i-1;j>=0;j--)
	{
		printf("%c",str[j]);	
		}
	return 0;	
}
	
	


