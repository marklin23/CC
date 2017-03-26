#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c1[100],c2,c3; // 1 byte 128bit;
	int i;
	gets(c1);


	while(c1[i]!='\0'){
		
		if (c1<'0' || c1>'9'){
			printf("is not a number");	
		}		
		i++;
	}




	return 0;
}
