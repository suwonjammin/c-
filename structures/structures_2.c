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
	printf("%d %d %.1lf",c1.x,c1.y,c1.r);
	
	return 0;
}
