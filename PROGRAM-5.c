#include <stdio.h>
int main()
{
	char ch;
	int m;
    printf("enter a character ");
	scanf("%c",&ch);
	m=ch%64;
	printf("%d\n",m);
}
