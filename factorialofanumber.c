#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;

	}
	printf("factorial is %d %d\n",n,f);
}
