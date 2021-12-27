#include<stdio.h>
int main()
{
	int n,i,p=1;
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		p=p*i;
		n=n/10;
	}
	printf("product is %d",p);
}
