#include <stdio.h>
#include <stdlib.h>
#define N 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	int ary[100];
	char fname [80];
	int i;
	double input;
	
	
	
	FILE *f1 = fopen(out1.txt,"w");
	
	
	while(1){
		scanf("%s",&input);
		if(input == -1){
			break;	
		}
		ary[i]= input;
		fprintf(f1,"%s",ary[i]);
		i++;
				
	}

	fclose(f1);	

	return 0;
}

