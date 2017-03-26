#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, j , a ,b ;
	
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=a;i++){
		
		for(j=1;j<=b;j++){
			printf("%d*%d=%2d ",i,j,i*j);					
		}
		printf("\n");
		
	}				
	return 0;
}
