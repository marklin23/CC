#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int a, b ,c;
	int min = 0;
	int max = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>b){
		max = a;
		min = b;
	}
	else{
		max = b;
		min = a;
	}
		
	
	if(max<c)
		max = c;

	if(c<min)
		min = c;
	
	
		
	printf("sum is %d\n",(a+b+c));
	printf("average is %.2f\n",(double)((a+b+c)/3));		
	printf("product is %d\n",(a*b*c));
	printf("smallest is %d\n",min);
	printf("largest is %d\n",max);
	system("pause");
	return 0;
}
