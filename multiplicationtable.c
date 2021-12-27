#include<stdio.h>
int main()
{
	int n,i=1,s=0,m=20;
	scanf("%d",&n);
	while(i<=m)
	{
		printf("multiplication table of: %d" "x%d" "=",n,i);
		s=n*i;
		printf("%d\n",s);
		i++;
	}
	
}
