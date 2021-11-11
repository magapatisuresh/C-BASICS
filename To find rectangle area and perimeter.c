//To find the area and perimeter of given rectangle
#include<stdio.h>
void main()
{
	int l, w, a, p;
	printf("Enter the length of rectangle: ");
	scanf("%d", &l);
	printf("Enter the width of rectangle:");
	scanf("%d", &w);
	a = l*w;
	p = 2*(l+w);
	printf("Area of the rectangle is:%d\n",a);
	printf("Perimeter of the rectangle is:%d",p);
	
}
