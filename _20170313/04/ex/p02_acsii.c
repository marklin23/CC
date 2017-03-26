#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char c1; //1 byte -128~127
	int a; //4 byte -2.14*10**10 ~ 2.14*10**10
	
	scanf(" %c", &c1);
	printf("%c, %d\n", c1,c1);
	
	scanf("%d", &a);
	printf("%c, %d\n", a,a);
	
	return 0;
}
