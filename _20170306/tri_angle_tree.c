#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, j , h ;
	
	scanf("%d",&h);
	
	for(i=0;i<h;i++){
		
		for(j=0;(j>=h-1-i)&&(j<h+i);j++){
			printf("*");
		/*	for(j=0;j<h*2;j++){
			
			if(j<(h-1-i)||(j>h+i)){
				printf(" ");
			}
			else if((i%2==1)&&(j%2==0)){
				printf(" ");									
			}
			else if((i%2==0)&&(j%2==1)){
				printf(" ");									
			}			
			else {
				printf("*");
			}*/
					
		}
		printf("\n");
		
	}				
	return 0;
}
