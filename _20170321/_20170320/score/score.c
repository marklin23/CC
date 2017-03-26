#include<stdio.h>
#include<stdlib.h>
#include"score.h"

void printAry(int n, int *P){
	int i;
	for(i=0;i<n;i++){
		
		printf("%d ",P[i]);
	}
	puts(" ");

}
double Avg(int n, int *P){
	
	int i;
	double sum =0;
	double avg =0;
	for(i=0;i<n;i++){
		sum+=P[i];
	}
	avg = sum/n;
	return avg;
	
}

int MaxScore(int n, int *P){
	int i;
	int temp = 0;
	for(i=0;i<n;i++){
		if(*(P+temp)<*(P+i)){
			temp = i;
		}
	}
	return temp;
}
