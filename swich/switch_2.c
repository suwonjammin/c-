#include <stdio.h>
int main()
{
	int age; //입력 받을 나이 
	printf("당신의 나이를 입력하세요:");
	scanf("%d",&age); 
	
	switch(age/10)
	{
		case 0:
			printf("\n 유소년입니다. \n");
			break;
		case 1:
			printf("\n 청소년 입니다. \n");
			break;
		case 2:
			printf("\n 청년 입니다. \n");
			break;
		case 3:
			printf("\n 청년 입니다. \n");
			break;
		case 4:
			printf("\n 중년 입니다. \n");
			break;
		case 5:
			printf("\n 중년 입니다. \n");
			break;
		case 6:
			printf("\n 노년 입니다. \n");
			break;
		case 7:
			printf("\n 노년 입니다. \n");
			break;
		case 8:
			printf("\n도전 백세 입니다. \n");
			break;
		case 9:
			printf("\n 성공 백세 입니다. \n");
			break;
			
		 
	}
	return 0 ;
}
