#include<stdio.h>
#include<stdlib.h>
#include"score.h"


int main(){
	
	int *student;
	int a , i ,sum=0,temp=0;
	double avg;
	scanf("%d",&a);
	student = (int *)malloc(sizeof(int)*a);
	for(i=0;i<a;i++){
		scanf("%d",&*(student+i));
	}
	
	printf("avg = %.2f\n",Avg(a,student));
	printf("highest:\n%d: %d", MaxScore(a,student)+1, student[MaxScore(a,student)] );

	free(student);
	return 0;
}

