#include <stdio.h>
#include <stdlib.h>
#define N 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	
	FILE *f1 = fopen("out01.txt","w");
	//FILE*out ;
	char str[80];
	int i;
	
	for(i=0;i<10;i++){
		fprintf(f1,"%d",i);	
		printf("%d\n",i);
		fflush(f1);	
	}

	fclose(f1);	

	return 0;
}

