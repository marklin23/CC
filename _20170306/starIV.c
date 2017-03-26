#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, j , h ,k;
	char p='*';
	scanf("%d",&h);
	
	for(i=0;i<h;i++){
	
		for(j=0;j<h;j++){
			
			if(j<h-i-1)
				printf(" ");
			else
				printf("*");		
		}
		//k=i-h;
		printf("\n");
	}	

	
			
	return 0;
}
