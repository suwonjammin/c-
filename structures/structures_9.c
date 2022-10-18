#include <stdio.h>

struct circle
{
	int x;
	int y;
	double r;
	double area;
	double round;
};

int main()
{
	struct circle c;
	
	c.x=10;
	c.y=20;
	c.r=5;
	c.area=c.r*c.r*3.14;
	c.round=c.r*2*3.14;
	printf("%lf %lf",c.area,c.round);
	
	return 0;
	
}
