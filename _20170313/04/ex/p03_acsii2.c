#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int c1; //1 byte -128~127
	for(c1=0;c1<128;c1++){		
		printf("%c, %d\n", c1,c1);
	}

	
	return 0;
}
