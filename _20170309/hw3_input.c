#include<stdio.h>
#include<stdlib.h>

#define H 5
#define W 3

int main()
{
	int ary[H][W] ;
	int sum;
	double avg;		 
	int i,j;
	int temp_i;
	double temp_avg=0;
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			scanf("%d", &ary[i][j]);
		}
	}
	/*
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
	*/
	
	for(i=0;i<H;i++){
		printf("student %d\n", i+1);
		sum = 0; 
		for(j=0;j<W;j++){
			printf(" %d: %d\n", j+1, ary[i][j]);
			sum += ary[i][j];
		}
		avg = (double)sum/W;
		printf(" sum: %d\n", sum);
		printf(" avg: %.2f\n", avg);
		
		if(temp_avg<avg){
			temp_avg = avg;
			temp_i   = i;
		}
	}
	
	sum = 0;
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			sum += ary[i][j];
		}
	}
	avg = (double)sum/(H*W);
	
	printf("total: %d, avg: %.2f\n", sum, avg);
	printf("highest avg: student %d: %.2f", temp_i+1,temp_avg);
	return 0;
}

