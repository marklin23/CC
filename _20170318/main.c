#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a= 100,b;
	int *p; // /* p 為一指標變數*/
	
	p = &a;
	b = *p+1; /*等於 b = a + 1;*/
	printf("%d %d \n",a,p); 
	*p = 80;   // a的值 變成  80
	
	printf("%d %d ",a,p); 
	return 0;
}
