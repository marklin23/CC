#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, j , h ,k=0;
	scanf("%d",&h);
	
	for(i=0;i<h;i++){
	
		for(j=0;j<=i;j++){
			k=k+1;
			printf("%d ",k);		
		}
		printf("\n");
	}	

	
			
	return 0;
}
