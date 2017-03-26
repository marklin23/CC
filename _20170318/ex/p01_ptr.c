#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a, b;
	int *p=NULL, *p2=NULL;
	a = 70;
	
	printf("name\taddr\tvalue\n");
	printf(" a\t%d\t%d\n", &a, a);	
	printf(" b\t%d\t%d\n", &b, b);		
	printf(" p\t%d\t%d\n", &p, p);	
	p = &a;
	b = *p;	
	puts("--------------------------------");
	//p = (int *)2293324;
	//*p = 20;
	
	printf(" p\t%d\t%d\n", &p, p);		
	printf(" b\t%d\t%d\n", &b, b);	
	printf(" a\t%d\t%d\n", &a, a);
	
	
	
	
	return 0;
}
