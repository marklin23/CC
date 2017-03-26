#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1,n2;

	scanf("%f%f",&n1,&n2);
	
	float end =	(n1+n2);	
	
	printf("%.2f + %.2f = %.2f\n",n1,n2,end);

	system("pause");

	return 0;
}
