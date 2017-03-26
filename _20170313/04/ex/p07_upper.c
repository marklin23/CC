#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char s1[100];
	int i;
	gets(s1);
	
	//for(i=0;i<100;i++){
	i = 0;
	while(s1[i] != '\0'){
		//如果 陣列中的第i個字 是小寫的話
		if(s1[i]>='a' && s1[i]<='z'){
			//就把它減32變大寫 
			s1[i]-=32;
		}
		i++;
	}
	
	printf("%s\n", s1);
	
	return 0;
}
