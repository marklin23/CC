#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1,n2,n3;

	scanf("%f%f%f",&n1,&n2,&n3);
	float end =	(n1+n2)*n3/2;	

	
	printf("%.1f\n",end);
	//printf("%d\n",a);
	system("pause");

	return 0;
}
