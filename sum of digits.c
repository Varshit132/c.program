#include<stdio.h>
int main()	
{
	int n,i,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		s=s+i;
		n=n/10;
	}
	printf("%d",s);
}




