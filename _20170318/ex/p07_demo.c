#include<stdlib.h>
#include<stdio.h>

int main()
{
	//int A[600000];
	
	int *p;
	int i;
	scanf("%d", &i);
	while(1){
		p = (int*)malloc(sizeof(int)*i);
		//free(p);
		if(p==NULL){
			puts("no memmory");
			return 0;
		}
	}
	
	return 0;
}
