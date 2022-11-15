#include <stdio.h>
#include <conio.h>
#include <windows.h>

void GotoXY(int x,int y);

int main()
{
	int x,y;
	printf("좌표를 입력하세요");
	scanf("%d %d",&x,&y); 
	GotoXY(x,y);
	printf("▣");

	
	
	return 0;
}

void GotoXY(int x,int y)
{
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
