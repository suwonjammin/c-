#include <stdio.h>
int main()
{
	int i;// �ݺ��� ���� �� �� 
	int n;// �Է� ���� 100�ʰ��� �ڿ���  
	int sum=0;//�հ踦 ������ ����,0���� �ʱ�ȭ ������.(������ �� ����)
	//�Է� �ޱ�,100�ʰ��� �ڿ����� �ƴ� ��� ���Է�  
	do{
		printf("100�ʰ��� �ڿ����� �Է�:");
	    scanf("%d",&n); 
	}while(n<=100);
	// 1~n ���� �ݺ��ϱ� 
	for(i=1;i<=n;i++)
	{
		//3�� ������� 7�� ������� Ȯ�� 
		if(i%3==0||i%7==0)
		{
			printf("%d ",i);
			//sum�� 3�� ��� Ȥ��7�� ����� ���ϱ� 
			sum+=i; 
		 } 
		
	}
	//���� ���
	printf("�� ���� %d�Դϴ� ",sum);
	return 0; 
}