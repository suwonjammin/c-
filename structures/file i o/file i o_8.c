#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *in=fopen("NumberFile.txt","r");
	int n,m;
	double d1,d2;
	
	
	
	printf("������ �� �� �Է��մϴ� ");
	fscanf(stdin,"%d %d",&n,&m);
	printf("�Ǽ��� �� �� �Է��մϴ�");
	fscanf(stdin,"%lf %lf",&d1,&d2); 
	
	printf("\n\n\n�Է� ���� ������ ��� ����մϴ�.\n");
	printf("%d %d\n",n,m);
	printf("%lf %lf\n",d1,d2); 
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("��� �Է� �޾������??");
	
	
	
	fclose(in);
	return 0;
	
	
	
}
