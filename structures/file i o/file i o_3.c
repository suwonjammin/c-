#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("CharOut.txt","r");
	
	if(fp==NULL)
	{
		printf("���Ͼ���\n");
		exit(1);
	}
	
	ch= fgetc(fp);
	printf("%c",ch);
	ch=fgetc(fp);
	putchar(ch);
	
	fclose(fp);
	
	
	
	return 0;
	
}
