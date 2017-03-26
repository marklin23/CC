#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c0,c1[80],c2[80];
	scanf(" %c",&c0);
	scanf("%s ",&c1);
	gets(c2);

	//scanf(" %s",&ch[]);

	printf("%c\n",c0);
	printf("%s\n",c1);
	printf("%s\n",c2);	
	
	//printf("%c",c1);	
	//printf("%c",ch[]);	

	return 0;
}
