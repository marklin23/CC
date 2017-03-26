#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s1[]={'A','P','P','L','E','\0'};
	char s2[]="APPLE";
	
	char s3[6];
	s3[0]='A';
	s3[1]='B';
	s3[2]='C';
	s3[3]='D';
	s3[4]='E';
	//s3[5]='\0';
		

	printf("%s\n%s\n%s\n",s1,s2,s3);
	return 0;
}
