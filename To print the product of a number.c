//find out the product of given number
#include<stdio.h>
int main()
{
	int n,r,prod=1;
	scanf("%d",&n);
	while(n>0)
	{
		r = n%10;
		prod = prod*r;
		n = n/10;
	}
	printf("%d",prod);
	return 0;
} 
