#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 3
int main()
{
	
	char s1[100]="Pineapple";
	char s2[100];
	gets(s2);
	
	printf("s1 => %d\n", s1);
	printf("s2 => %d\n", s2);
	
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
	
	//s1 = s2;
	//memcpy(s1,s2,sizeof(char)*100);
	//strcpy(s1,s2);
	//s1 = "Apple pen";
	strcpy(s1,"Apple pen");
	puts(s1);
	puts(s2);
	
	//s1 += s2;
	strcat(s1,s2);
	puts(s1);	
	puts(s2);

	int len = strlen(s1);
	printf("len = %d\n", len);
	
	return 0;
}
