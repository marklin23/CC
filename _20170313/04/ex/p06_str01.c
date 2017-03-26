#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char s1[] = {'A','p','p','l','e','\0'}; 
	char s2[] = "Apple";
	char s3[6];
	char s4[100], s5[100];
	
	s3[0] = 'A';
	s3[1] = 'p';
	s3[2] = 'p';
	s3[3] = 'l';
	s3[4] = 'e';
	s3[5] = '\0';
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	
	scanf("%s", s4);
	printf("%s\n", s4);
	fflush(stdin);
	gets(s5);	
	printf("%s\n", s5);
	
	return 0;
}
