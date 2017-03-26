#include<stdio.h>
#include<stdlib.h>

#define H 2
#define W 3

int main()
{
	int ary[H][W];
	int sum=0;
	double avg;		 
	int i,j;
	
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			
			scanf("%d",&ary[i][j]);
			
		}
	}

	
	for(i=0;i<H;i++){
		printf("class %d\n", i+1);
		sum = 0; 
		for(j=0;j<W;j++){
			printf(" %d: %d\n", j+1, ary[i][j]);
			sum += ary[i][j];
		}
		
		avg = (double)sum/W;
		printf(" sum: %d\n", sum);
		printf(" avg: %.2lf\n", avg);

	}
	
	
	sum = 0;
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			sum += ary[i][j];
		}
	}
	avg = (double)sum/(H*W);
	
	printf("total: %d, avg: %.2lf\n", sum, avg);

	return 0;
}

