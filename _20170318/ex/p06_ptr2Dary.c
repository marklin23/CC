#include<stdlib.h>
#include<stdio.h>

int main()
{
	int **P;
	int i,j, h=5,w=7;
	int ct = 1;
	
	P = (int **)malloc(sizeof(int*)*h);
	for(i=0;i<h;i++){
		P[i] = (int *)malloc(sizeof(int)*w);
	}
	
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			P[i][j] = ct;
			ct++;
		}
	}
	
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			printf("%4d", P[i][j]);
		}
		puts("");
	}
	
	
	for(i=0;i<h;i++)
		free(P[i]);
	free(P);
	
	//free(P);
	
	
	return 0;
}
