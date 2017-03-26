#include<stdio.h>
#include<stdlib.h>



int main(){
	
	int *student;
	int a , i ,sum=0,temp=0;
	double avg;
	scanf("%d",&a);
	student = (int *)malloc(sizeof(int)*a);
	for(i=0;i<a;i++){
		
		scanf("%d",&*(student+i));
	
	}
	for(i=0;i<a;i++){
		sum += *(student+i);
		if(*(student+temp)<*(student+i)){
			temp = i;
		}
	}
	avg = (double) sum/a;
	printf("%d: avg=%.3f  sum=%d",temp+1,avg,sum);
	
	free(student);
	return 0;
}
