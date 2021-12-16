#include<stdio.h>
void main()
{
	int marks;
	printf("enter the marks");
	scanf("%d",& marks);
	if (marks>=80)
	printf("A grade");
	else if (marks>=70 && marks<80)
	printf("B grade");
	else if (marks>=60 && marks<70)
	printf("C grade");
	else if(marks>=50 && marks<60 )
	printf("D grade");
	else 
	printf("E grage");
}
