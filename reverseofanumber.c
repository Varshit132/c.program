#include<stdio.h>
int main()
{
	int n,x,r;
	scanf("%d",&n);
	while(n!=0)
	{
	  r=n%10;
	  x=x*10+r;
	  n /= 10;
	}
	printf("reversed number = %d",x);
}
