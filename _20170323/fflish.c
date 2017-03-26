#include <stdio.h>
#include <stdlib.h>
#define N 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	
	FILE *f1 = fopen("text.txt","r");
	//FILE*out ;
	char str[80];
	
	fscanf(f1,"%s",&str);
	
	printf("%s",str);

	fclose(f1);	

	return 0;
}

