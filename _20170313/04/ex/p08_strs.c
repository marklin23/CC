#include<stdio.h>
#include<stdlib.h>

#define N 3
int main()
{
	
	char s1[N][100];
	
	
	int i;
	for(i=0;i<N;i++){	
		gets(s1[i]);
	}
	
	for(i=0;i<N;i++){	
		printf("%s\n", s1[i]);
	}
	

	
	return 0;
}
