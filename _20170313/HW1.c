#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0 , j=0, k=0 , m=0;
	char Ans[5]; 
	char iKey[5];
//	printf("Please enter anser:\n");
	scanf("%s",&Ans);
	
	while(1){
		j=0;k=0;
	//	printf("Please enter guess:\n");
		scanf("%s",&iKey);		

		for(i=0;i<4;i++){
			if(iKey[i]==Ans[i]){
				j++;
				continue;
			}
			else{
				for(m=0;m<4;m++){
					if(iKey[i]==Ans[m]){
						k++;
						break;
					}	
				}			
			}
		}		
		
		printf("%dA%dB\n",j,k);
		
		if(strcmp(iKey,Ans)==0){
			printf("You Win!");
			break;
		}
	}

	return 0;
}
