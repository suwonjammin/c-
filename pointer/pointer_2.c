#include <stdio.h>

void AddNum(int* p1,int* p2);
void SubNum(int*,int*);
void MulNum(int*,int*);
void DivNum(int*,int*);
	
int main()
{
	int a,b;
	int *pa = &a;
	int *pb = &b;
	
	printf("정수 입력: ");
	scanf("%d %d",&a,&b);
	
	AddNum(&a,&b);
	SubNum(&a,&b); 
	MulNum(pa,pb);
	DivNum(pa,pb);
	
	return 0;
	
}

void AddNum(int *p1,int *p2)
{
	*p1=*p1+*p2;
	printf("%d\n ",*p1);
}
	void SubNum(int *p1, int *p2)
	{
		*p1=*p1-*p2;
		printf("%d\n ",*p1);
	}
	void MulNum(int *p1, int *p2)
	{
		*p1=*p1*(*p2);
		printf("%d\n ",*p1);
		
	}
	void DivNum(int *p1,int *p2)
	{
		*p1=*p1/(*p2);
		printf("%d\n ",*p1);
	}

