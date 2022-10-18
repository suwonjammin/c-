#include <stdio.h>
#include <string.h>

struct Address
{
	char name[10];
	char phon[20];
	char home[50];

};

int main()
{
	struct Address man3;
	scanf("%s",man3.name);
	scanf("%s",man3.phon);
	scanf("%s",man3.home);
	
	printf("%s %s %s",man3.name,man3.phon,man3.home);
	
	return 0;
}
	
