#include<stdlib.h>
#include<stdio.h>

int main()
{
	int *P;
	int n, i;
	printf("請輸入人數：");
	scanf("%d", &n);
	P = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		//scanf("%d", &P[i]);
		scanf("%d", P+i);
	}
	for(i=0;i<n;i++){
		printf("%d ", P[i]);
	}
	
	free(P);
	
	return 0;
}
