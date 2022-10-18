#include <stdio.h>

struct Circle
{
	int x;
	int y;
	double r;
};

int main()
{
	struct Circle c1,c3,c4;
	c1.x=5;
	c1.y=5;
	c1.r=3.4;
	c3=c1;
	printf("%d %d %.1lf",c3.x,c3.y,c3.r);
	
	return 0;
}
