#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char c1; 
	scanf(" %c", &c1);
	
	if(c1>='0' && c1<='9'){
		printf("是數字\n");
	}
	else if(c1>='a' && c1<='z'){
		printf("是小寫英文字母\n");
		//A=65, a=97 ,diff=-32
		printf("轉大寫%c\n", c1-32);
	}
	else if(c1>='A' && c1<='Z'){
		printf("是大寫英文字母\n");
	}
	else{
		printf("是其它符號\n");
	}

	
	return 0;
}
