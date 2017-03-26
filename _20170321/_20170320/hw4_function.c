#include<stdio.h>
#include<stdlib.h>
void printAry(int n, int *P){
	
	int i; 
	for(i=0;i<n;i++){
		printf("%d ", P[i]);
	}
	puts(" ");
}



int MaxScore(int n, int *P){
	int maxpos;
	
}



double average(int student, int *score){
	
	int i;
	double sum =0;
	double avg =0;
	for(i=0;i<student;i++){
		sum+=score[i];
	}
	avg = sum/student;
	return avg;
}

int main(){
	
	int *student;
	int a , i ,sum=0,temp=0;
	double avg;
	scanf("%d",&a);
	student = (int *)malloc(sizeof(int)*a);
	for(i=0;i<a;i++){
		
		scanf("%d",&*(student+i));
	
	}
	
	printAry(a,student);
	
	
/*	for(i=0;i<a;i++){
		sum += *(student+i);
		if(*(student+temp)<*(student+i)){
			temp = i;
		}
	}
	avg = (double) sum/a;
	printf("%d: avg=%.3f  sum=%d",temp+1,avg,sum);*/
	
	free(student);
	return 0;
}
