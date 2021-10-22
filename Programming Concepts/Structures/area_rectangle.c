// Finding area of rectangle using structures, given coordinates being (15,15), (20,20)

#include<stdio.h>

struct point
{
	int x, y;
};

int pos(int a)
{
	if(a>0)
	return a;
	else
	return -a;
}

int Area_rect(struct point A, struct point B)
{
	int area;
	area = (A.x - B.x) * (A.y-B.y);
	return area;
}

void main()
{
	struct point A, B;
	A.x = 15;
	A.y = 15;
	B.x = 20;
	B.y = 20;
	printf("%d", Area_rect(A,B));
}
