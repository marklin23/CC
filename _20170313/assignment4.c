#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s1[100],s2[100]; // 1 byte 128bit;
	int i;
	gets(s1);
	gets(s2);
	if(strcmp(s2,s1)<0){
		printf("1>2\n");
	}
	else if (strcmp(s2,s1)==0){
		printf("1==2\n");	
	}
	else{
		printf("1<2\n");
	}
	strcat(s1,s2);
	printf("%s\n",s1);		
	
	i = strlen(s1);
	printf("%d",i);

	//printf("%s",s2);
	return 0;
}
