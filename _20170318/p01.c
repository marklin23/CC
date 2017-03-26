#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[N] = {11,22,33,44,55};
	int *P; 
	int i ;
	
	P = ary;
	
	for(i=0;i<N;i++){
		printf("ary[%d]=>%d, mem=%d\n",i,P[i],&P[i]);
	}
	 
	for(i=0;i<N;i++){
		printf("ary[%d]=>%d, mem=%d\n",i,*P+i,&*(P+i));
	}
		
	for(i=0;i<N;i++){
		printf("ary[%d]=>%d, mem=%d\n",i,*P+i,(P+i));
	}	
	
	return 0;
}
