#include <stdio.h>
int main()
{
	char str[]="Hello string";
	char name[20]="시큐브 코딩";
	char *p ,*q;
	
	p=str;
	q=name;
	
	printf("%d %d\n",str,name);
	printf("%s %s\n",str,name);
	
	return 0;
}
