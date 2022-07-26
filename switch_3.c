# include <stdio.h>
int main()
{
	int n;
	do{
		printf("1~30까지 정수 하나 입력:");
		scanf("%d",&n) ;
	}while(n<=0||n>30);
	switch(n%7)
	{
	case 0:
	    	printf("\n 금요일 입니다. \n");
	    	break;
        case 1:
	    	printf("\n 토요일 입니다. \n");
	    	break;
	    case 2:
	    	printf("\n 일요일 입니다. \n");
	    	break;
	    case 3:
	    	printf("\n 월요일 입니다. \n");
	    	break;
	    case 4:
	    	printf("\n 화요일 입니다. \n");
	    	break;
	    case 5:
	    	printf("\n 수요일 입니다. \n");
	    	break;
	    case 6:
	    	printf("\n 목요일 입니다. \n");
	    	break;	
	}
	    
	return 0; 
}
