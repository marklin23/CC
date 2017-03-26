#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, m, n;
	int **students;
//===========================================================
// Sample Input
//===========================================================	
	scanf("%d",&m);
	scanf("%d",&n);
//===========================================================
// set ary mem
//===========================================================		
	students = (int **)malloc(sizeof(int*)*m);
	for(i=0;i<m;i++){
		
		students[i] = (int *)malloc(sizeof(int)*n);
	}
//===========================================================
// Sample Input
//===========================================================		
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&students[i][j]);
		}

	}	
//===========================================================
// Sample Ouput
//===========================================================	
	int sum = 0;
	double avg = 0;
	for(i=0;i<m;i++){
		printf("class %d\n",i+1);
		sum = 0;
		avg = 0;
		for(j=0;j<n;j++){
			printf(" %d: %d\n",j+1,students[i][j]);
			sum +=students[i][j];
		}
		printf(" sum: %d\n",sum);
		printf(" avg: %.2f\n",(double)sum/n);	
	}


	sum	=	0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum +=students[i][j];
		}
	
	}	
	
	printf("total: %d, avg: %.2f\n",sum,(double)sum/(n*m));

	
//===========================================================
// free ary mem
//===========================================================	
	for(i=0;i<m;i++){
		free(students[i]);
	}
	free(students);
	
	return 0;
}
