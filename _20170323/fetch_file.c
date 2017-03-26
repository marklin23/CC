#include <stdio.h>
#include <stdlib.h>
#define N 30
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	FILE *f1;
	int i;
	char str [80];
	char ch;
	
	f1 = fopen("input.txt","r");
	
	if(f1==NULL){
		printf("NO FILE");
		return 0 ;
	}
	
	while(1){
		fscanf(f1,"%c",&ch); 
		if (feof(f1)){
			break;
		}
		printf("%c",ch);
		 
	}
	return 0;
}

