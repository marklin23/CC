#include<stdlib.h>
#include<stdio.h>

#define N 5

int main()
{
	int *P[N];
	int i,j;
	int ct = 1;
	
	for(i=0;i<N;i++){
		P[i] = (int *)malloc(sizeof(int)*(i+1));
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<i+1;j++){
			P[i][j] = ct;
			ct++;
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<i+1;j++){
			printf("%d ", P[i][j]);
		}
		puts("");
	}
	
	for(i=0;i<N;i++){
		free(P[i]);
	}
	
	
	return 0;
}
