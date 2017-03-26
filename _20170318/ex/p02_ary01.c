#include<stdlib.h>
#include<stdio.h>

#define N 5

int main()
{
	int ary[N] = {11,22,33,44,55};
	int *P;
	int i;

	for(i=0;i<N;i++){
		printf("ary[%d]=>%d, mem=%d\n",i,ary[i],&ary[i]);
	}
	puts("");
	
	P = ary;
	for(i=0;i<N;i++){
		printf("P[%d]=>%d, mem=%d\n",i,P[i],&P[i]);
	}
	puts("");
	
	for(i=0;i<N;i++){
		printf("*(P+%d)=>%d, mem=%d\n",i,*(P+i),&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*(P+i));
	}
	puts("");
	
	
	return 0;
}
