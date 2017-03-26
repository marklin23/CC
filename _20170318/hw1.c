#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[N];
	int *P; 
	int i , j ;
	int temp=0;
	P = ary;
	for(i=0;i<N;i++){
		scanf("%d",&P[i]);
	}


	
	
	for(i=0;i<N;i++){
		if(P[temp]<*(P+i)){
			temp = i;
		}
	}
	printf("%d: %d",temp+1,*(P+temp));	
	
		

	
	return 0;
}
