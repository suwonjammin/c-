#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int x,y;
	COORD pos ={50,12};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("Hello C3coding");
	_getch();
	
	return 0;
}
