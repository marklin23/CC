#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c1,c2,c3; // 1 byte 128bit;
	scanf("%c", &c1);
	
	if (c1>='0' && c1<='9'){
		printf("is NUM\n");
	}
	else if(c1>=97 && c1<=122){
		printf("%c",c1-32);			//A=65 , a=97,  diffenence 97-65 = 32
	}
	else if(c2>=65 && c2<=90){
		printf("is big word");
	}
	else{
		printf("is another char");
	}




	return 0;
}
