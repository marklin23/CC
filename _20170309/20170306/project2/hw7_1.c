#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i , j , t=0,k;
	
	scanf("%d",&t);

	for(i=0;i<t;i++){
		
		for(j=0;j<i+1;j++){
			printf("*");
		
		} 		

		printf("\n");
	}
	
	return 0;	
	
}



