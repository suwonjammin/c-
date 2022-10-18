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
	struct Address man1;
	strcpy(man1.name,"jiho");
	strcpy(man1.phon,"010-8470-9335");
	strcpy(man1.home,"suwon");
	
	printf("%s %s %s",man1.name,man1.phon,man1.home);
	
	return 0;
}
