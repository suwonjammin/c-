 #include <stdio.h>
 #include <windows.h>
 void printMenu()
 {
 	printf("계산기 입니다~~\n");
	 	printf("1.더하기\n");
	 	printf("2. 빼기\n");
	 	printf("3.곱하기\n");
	 	printf("4.몫\n");
	 	printf("5.나머지\n");
	 	
 }
 void add()
 {
 	int num1,num2;
 	printf("두 수를 입력하세요.");
 	scanf("%d%d",&num1,&num2);
	 
	printf("%d+%d=%d \n",num1,num2,num1+num2); 
 }
 void ad()
 {
 	int num1,num2;
 	printf("두 수를 입력하세요 ");
 	scanf("%d%d",&num1,&num2);
 	printf("%d-%d=%d",num1,num2,num1-num2);
 }
 void ac()
 {
 	int num1,num2;
 	printf("두 수를 입력하세요 ");
 	scanf("%d%d",&num1,&num2);
	printf("%dX%d=%d",num1,num2,num1*num2);  
 }
 void at()
 {
 	int num1,num2;
 	printf("두 수를 입력하세요");
 	scanf("%d%d",&num1,&num2);
	printf("%d/%d=%d",num1,num2,num1/num2); 
		
 }
 void ax()
 {
 	int num1,num2;
 	printf("두 수를 입력하세요 ");
 	scanf("%d%d",&num1,&num2);
 	printf("  %d나머지%d=%d",num1,num2,num1%num2);
	 
 }
 void av()
 {
 	float num1,num2;
 	printf("두 수를 입력하세요 ");
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
	 	printf("할 작업을 입력해주세요(1~5):");
	 	scanf("%d",&k);
	 	switch(k)
	 	{
	 		case 1:
	 			printf("더하기를 하세요\n");
	 			add();
	 			break;
	 		case 2:
	 			printf("빼기를 하세요\n");
	 			ad();
	 			break;
	 		case 3:
	 			printf("곱하기를 하세요\n");
	 			ac();
	 			break;
	 		case 4:
	 			printf("몫을 하세요\n");
	 			at();
	 			break;
	 		case 5:
	 			printf("나머지를 하세요\n");
	 			ax();
	 			break;
	 		case 6:
			 	printf("소수 더하기를 하세요\n ")
				av();
				break; 
	 		default:
	 			printf("잘못 입력 된 값입니다\n");
	 			break;
		 }
		 
		 
 		Sleep(1000);	
	 }
	 
 	return 0; 
  } 
