#include<stdio.h>
int main()
{
	char ch='A';
	scanf("%c",&ch);
	while(ch<='z')
	{
		printf("%c",ch);
		ch++;
	}
	printf("\n\n");
}
