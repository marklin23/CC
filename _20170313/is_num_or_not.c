#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c1;
	char s1[100];
	int i=0,j=0;
	
	gets(s1);
	
		
	while(s1[i]!='\0'){
		
		if(s1[i]>='0'&&s1[i]<='9'){
			j++; 
		}
		
		i++;
		
	}
	
	if(j<i){
		printf("is not a number");
	}
	else{
		printf("n=%s",&s1); 
	}
	
	
	
	return 0;
}
