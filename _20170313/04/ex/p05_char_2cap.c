#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char c1; 
	scanf(" %c", &c1);
	
	if(c1>='0' && c1<='9'){
		printf("�O�Ʀr\n");
	}
	else if(c1>='a' && c1<='z'){
		printf("�O�p�g�^��r��\n");
		//A=65, a=97 ,diff=-32
		printf("��j�g%c\n", c1-32);
	}
	else if(c1>='A' && c1<='Z'){
		printf("�O�j�g�^��r��\n");
	}
	else{
		printf("�O�䥦�Ÿ�\n");
	}

	
	return 0;
}
