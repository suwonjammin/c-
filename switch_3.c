# include <stdio.h>
int main()
{
	int n;
	do{
		printf("1~30���� ���� �ϳ� �Է�:");
		scanf("%d",&n) ;
	}while(n<=0||n>30);
	switch(n%7)
	{
	case 0:
	    	printf("\n �ݿ��� �Դϴ�. \n");
	    	break;
        case 1:
	    	printf("\n ����� �Դϴ�. \n");
	    	break;
	    case 2:
	    	printf("\n �Ͽ��� �Դϴ�. \n");
	    	break;
	    case 3:
	    	printf("\n ������ �Դϴ�. \n");
	    	break;
	    case 4:
	    	printf("\n ȭ���� �Դϴ�. \n");
	    	break;
	    case 5:
	    	printf("\n ������ �Դϴ�. \n");
	    	break;
	    case 6:
	    	printf("\n ����� �Դϴ�. \n");
	    	break;	
	}
	    
	return 0; 
}
