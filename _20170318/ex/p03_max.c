#include<stdlib.h>
#include<stdio.h>

#define N 5

int main()
{
	int A[N]={0};
	int *P;
	P = A;	
	//int a = 10;
	//printf("%d %d", a, A);
	
	int i;

	for(i=0;i<N;i++){
		//scanf("%d", &P[i]);
		//scanf("%d", &*(P+i));
		scanf("%d", P+i);
	}
	
	//find max
	int MaxPos = 0;
	for(i=0;i<N;i++){
		if(*(P+i) > P[MaxPos]){
			MaxPos = i;
		}
	}
	
	printf("%d: %d\n", MaxPos+1, *(P+MaxPos));	
	
	return 0;
}
