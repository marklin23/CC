#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, j , h ,k;
	char p='*';
	scanf("%d",&h);
	
	for(i=0;i<h;i++){
	
		for(j=0;j<h;j++){	
			if (i>h/2){
				if(j<=(h/2+h-1-i)){
					if(j<i-h/2){
						printf(" ");				
					}
					else{
						printf("*");	
					}
				
				}
			}
			else{
				if(j<=h/2+i){
					if(j<h/2-i){
						printf(" ");				
					}
					else{
						printf("*");	
					}		
				}				
			}
		}

		printf("\n");
	}	

	
			
	return 0;
}
