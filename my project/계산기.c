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
 	scanf("%d%d",&num1,&num2);
	printf("%f+%f=%f",num1,num2,num1+num2);
	 
  } 
 int main()
 {
 	int k;
 	while(1)
 	{
 		system("cls");
 		printMenu();
	 	printf("�� �۾��� �Է����ּ���(1~5):");
	 	scanf("%d",&k);
	 	switch(k)
	 	{
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
			 	printf("�Ҽ� ���ϱ⸦ �ϼ���\n ")
				av();
				break; 
	 		default:
	 			printf("�߸� �Է� �� ���Դϴ�\n");
	 			break;
		 }
		 
		 
 		Sleep(1000);	
	 }
	 
 	return 0; 
  } 
