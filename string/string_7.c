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
	printf("���ڿ��� ����:%d",i);
	int j;
	for(j=i-1;j>=0;j--)
	{
		printf("%c",str[j]);	
		}
	return 0;	
}
	
	


