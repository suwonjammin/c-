#include <stdio.h>
int main()
{
	char str[]="Hello string";
	char name[20]="��ť�� �ڵ�";
	char *p ,*q;
	
	p=str;
	q=name;
	
	printf("%d %d\n",str,name);
	printf("%s %s\n",str,name);
	
	return 0;
}
