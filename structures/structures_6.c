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
	struct Address man1={"jiho","010-8470-9335","suwon"};
	
	printf("%s %s %s",man1.name,man1.phon,man1.home);
	
	return 0;
}
