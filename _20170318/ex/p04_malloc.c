#include<stdlib.h>
#include<stdio.h>

int main()
{
	int *P;
	int n, i;
	printf("�п�J�H�ơG");
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
