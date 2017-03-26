#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 3
int main()
{
	
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	
	//if(s1==s2){
	if(strcmp(s1,s2)==0){
		puts("1==2");
	}
	//else if(s1 > s2){
	else if(strcmp(s1,s2)>0){
		puts("1>2");
	}
	else{
		puts("1<2");
	}

	//s1 += s2;
	strcat(s1,s2);
	puts(s1);

	int len = strlen(s1);
	printf("%d\n", len);
	
	return 0;
}
