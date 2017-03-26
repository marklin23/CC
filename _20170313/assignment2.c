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
	s3[5]='\0';
	char s4[100];
	char s5[100]="\0";
	//scanf("%s\n",s4);// can't put space and enter
	//printf("%s\n",s4);
	//fflush(stdin);// clear key board register for windows x86 
	gets(s5); // can enter whole input signal 
	
	
	int i;
	while(s5[i]!='\0'){
		for(i=0;i<100;i++){
			if(s5[i]>='a'&&s5[i]<='z'){
				s5[i] -= 32;
			}		
					
		}
	}
	
	printf("%s",s5);
//	printf("%s\n",s5);
	//printf("%s\n%s\n%s\n",s1,s2,s3);
	return 0;
}

