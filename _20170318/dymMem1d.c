#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int students;
	int *score;
	int i, sum=0;
	double avg=0;
	int *P;
	
	scanf("%d",&students);
	score = (int*)malloc( sizeof(int)*students) ;
	
	for(i=0;i<students;i++){
		
		scanf("%d",&*(score+i));
	}
	
	for(i=0;i<students;i++){
		sum+=*(score+i);
	}	
	avg = (double)sum/students;
	
	printf("avg = %.2f\n",avg); 
	printf("fail:\n");
	for(i=0;i<students;i++){
		if(*(score+i)<60){
			printf("%d: %d\n",i+1,*(score+i));
		}
	}
	
	printf("highest:\n");
	int max=0;
	for(i=0;i<students;i++){
		if(*(score+max)<*(score+i)){
			max = i;
		}
	}	
	printf("%d: %d\n",max+1,*(score+max));
	
	
	free(score);
	return 0;
}
