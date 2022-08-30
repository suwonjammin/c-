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
	 	printf("6.소수의 덧셈 \n"); 
	 	printf("7.소수의 뺄셈 \n");
	 	printf("8.분수의 덧셈(통분은 해오세요,나누기기호 쓰지 마세요) \n");
	 	printf("계산기를 종료하고 싶으시다면 10을 써주세요\n");
	 	
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
 	scanf("%f%f",&num1,&num2);
	printf("%f+%f=%f",num1,num2,num1+num2);
	 
  } 
  void ah()
  {
  	float num1,num2;
  	printf("두 수를 입력하세요");
  	scanf("%f%f",&num1,&num2);
	printf("%f-%f=%f",num1,num2,num1-num2); 
  }
  void cc()
  {
  	int num3;
  	printf("4x-8=2x+4의 해를 구하여라 ");
  	scanf("%d",&num3); 
  	if(num3==3)
	{
		printf("정답!!");
		printf("수학을 평균 이상은 하시네요");
	}else
	{
		printf("아쉽네요ㅠㅠㅠ \n");
		printf("저보다 수학을 못하시네요ㅋㅋㅋ");
	} 
	
  }
  void am()
  {
  	int num1,num2,num3,num4;
  	printf(" 네 수를 입력하세요 ");
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
	 	printf("할 작업을 입력해주세요(1~8):");
	 	scanf("%d",&k);
	 	switch(k)
	 	{
	 		case 0:
	 			printf("이스터 에그 \n");
	 			cc();
				 break; 
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
			 	printf("소수 더하기를 하세요\n ");
				av();
				break; 
			case 7:
				printf("소수 빼기를 하세요\n");
				ah();
				break;
			case 8:
				printf("분수 더하기를 하세요\n");
				am();
				break; 
			
			case 10:
				printf(" \n ---계산기를 종료합니다--- \n");
				return 0;
				 
				
			
	 		default:
	 			printf("잘못 입력 된 값입니다\n");
	 			printf("다시 입력해주세요^^ \n");
	 			break;
		 }
		 
		 
 		Sleep(1000);	
	 }
	 
 	return 0; 
  } 
