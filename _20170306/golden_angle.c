#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	void print_angle(int h){
		int i,j;
		for(i=0;i<h;i++){
		
			for(j=0;j<h;j++){
				
				if(j<h-i-1){
					printf(" ");		
				}		
				else{
					if(h%2==0){
						if(i%2==1&&j%2==1){
								printf(" ");
						}
						else if(i%2==0&&j%2==0){
								printf(" ");
						}
						else{
							printf("*");
						}
					}
					else{
						if(i%2==1&&j%2==0){
								printf(" ");
						}
						else if(i%2==0&&j%2==1){
								printf(" ");
						}
						else{
							printf("*");
						}
					}
				}
							
			}
	
			for(j=0;j<h;j++){
				
				if(j<i){
					if(i%2==1&&j%2==1){
						printf(" ");
					}
					else if(i%2==0&&j%2==0){
						printf(" ");
					}
					else{
						printf("*");
					}
				}
							
			}		
				
			printf("\n");
		}	
	
	}	

int main(int argc, char** argv) {
	
	int i, j  ,k;
//	char p='*';
	//scanf("%d",&h);
	for(i=0;i<8;i++){
		print_angle(i);	
	}

		
			
	return 0;
}

