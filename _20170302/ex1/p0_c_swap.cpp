#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1,n2;
	
	int a = &n1;
	
	
	scanf("%d%d",&n1,&n2);//
	
	printf("%d\n%d\n",n2,n1);
	printf("%d\n",a);
	system("pause");

	return 0;

}
