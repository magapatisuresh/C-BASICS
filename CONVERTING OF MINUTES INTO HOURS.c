#include<stdio.h>
void main ()
{
	int m, h, n ;
	printf("Enter minutes:");
	scanf("%d", &m);
	h=m/60;
	printf("%d Hour(s)",h);
	n=m%60;
	printf("\n%d minute(S)",n);
}
