#include<stdio.h>
#include<stdlib.h>

#define H 5
#define W 3

int main()
{
	int ary[H][W] = {76,73,85,
					 88,84,76,
					 92,82,92,
					 82,91,85,
					 72,74,73			 			
								};
	int sum;
	double avg;		 
	int i,j;
	int temp_i;
	double temp_avg=0;
		
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
			temp_i   = i+1;
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
	printf("highest avg: student %d: %.2f", temp_i,temp_avg);
	return 0;
}

