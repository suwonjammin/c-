#include <stdio.h>
 #include <windows.h>
 
 void printMenu()
 {
 	printf("���� �Դϴ�~~\n");
	 	printf("1.���ϱ�\n");
	 	printf("2. ����\n");
	 	printf("3.���ϱ�\n");
	 	printf("4.��\n");
	 	printf("5.������\n");
	 	printf("6.�Ҽ��� ���� \n"); 
	 	printf("7.�Ҽ��� ���� \n");
	 	printf("8.�м��� ����(����� �ؿ�����,�������ȣ ���� ������) \n");
	 	printf("���⸦ �����ϰ� �����ôٸ� 10�� ���ּ���\n");
	 	
 }
 void add()
 {
 	int num1,num2;
 	printf("�� ���� �Է��ϼ���.");
 	scanf("%d%d",&num1,&num2);
	 
	printf("%d+%d=%d \n",num1,num2,num1+num2); 
 }
 void ad()
 {
 	int num1,num2;
 	printf("�� ���� �Է��ϼ��� ");
 	scanf("%d%d",&num1,&num2);
 	printf("%d-%d=%d",num1,num2,num1-num2);
 }
 void ac()
 {
 	int num1,num2;
 	printf("�� ���� �Է��ϼ��� ");
 	scanf("%d%d",&num1,&num2);
	printf("%dX%d=%d",num1,num2,num1*num2);  
 }
 void at()
 {
 	int num1,num2;
 	printf("�� ���� �Է��ϼ���");
 	scanf("%d%d",&num1,&num2);
	printf("%d/%d=%d",num1,num2,num1/num2); 
		
 }
 void ax()
 {
 	int num1,num2;
 	printf("�� ���� �Է��ϼ��� ");
 	scanf("%d%d",&num1,&num2);
 	printf("  %d������%d=%d",num1,num2,num1%num2);
	 
 }
 void av()
 {
 	float num1,num2;
 	printf("�� ���� �Է��ϼ��� ");
 	scanf("%f%f",&num1,&num2);
	printf("%f+%f=%f",num1,num2,num1+num2);
	 
  } 
  void ah()
  {
  	float num1,num2;
  	printf("�� ���� �Է��ϼ���");
  	scanf("%f%f",&num1,&num2);
	printf("%f-%f=%f",num1,num2,num1-num2); 
  }
  void cc()
  {
  	int num3;
  	printf("4x-8=2x+4�� �ظ� ���Ͽ��� ");
  	scanf("%d",&num3); 
  	if(num3==3)
	{
		printf("����!!");
		printf("������ ��� �̻��� �Ͻó׿�");
	}else
	{
		printf("�ƽ��׿�ФФ� \n");
		printf("������ ������ ���Ͻó׿䤻����");
	} 
	
  }
  void am()
  {
  	int num1,num2,num3,num4;
  	printf(" �� ���� �Է��ϼ��� ");
  	scanf("%d%d%d%d",&num1,&num2,&num3,&num4) ;
  	printf("%d/%d+%d/%d=%d/%d",num1,num2,num3,num4,num1+num3,num2);
  	
  }
  
 int main()
 {
 	int k;
 	while(1)
 	{
 		system("cls");
 		printMenu();
	 	printf("�� �۾��� �Է����ּ���(1~8):");
	 	scanf("%d",&k);
	 	switch(k)
	 	{
	 		case 0:
	 			printf("�̽��� ���� \n");
	 			cc();
				 break; 
	 		case 1:
	 			printf("���ϱ⸦ �ϼ���\n");
	 			add();
	 			break;
	 		case 2:
	 			printf("���⸦ �ϼ���\n");
	 			ad();
	 			break;
	 		case 3:
	 			printf("���ϱ⸦ �ϼ���\n");
	 			ac();
	 			break;
	 		case 4:
	 			printf("���� �ϼ���\n");
	 			at();
	 			break;
	 		case 5:
	 			printf("�������� �ϼ���\n");
	 			ax();
	 			break;
	 		case 6:
			 	printf("�Ҽ� ���ϱ⸦ �ϼ���\n ");
				av();
				break; 
			case 7:
				printf("�Ҽ� ���⸦ �ϼ���\n");
				ah();
				break;
			case 8:
				printf("�м� ���ϱ⸦ �ϼ���\n");
				am();
				break; 
			
			case 10:
				printf(" \n ---���⸦ �����մϴ�--- \n");
				return 0;
				 
				
			
	 		default:
	 			printf("�߸� �Է� �� ���Դϴ�\n");
	 			printf("�ٽ� �Է����ּ���^^ \n");
	 			break;
		 }
		 
		 
 		Sleep(1000);	
	 }
	 
 	return 0; 
  } 
