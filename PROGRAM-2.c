#include <stdio.h>
int main()
{
	int n,x,i;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=7;i>=0;i--)
	{
		x=(n>>i)&1;
		printf("%d",x);
	}
}
