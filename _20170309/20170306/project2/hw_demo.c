#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i , j , t=0,k;
	
	scanf("%d",&t);
	
	for(i=1;i<t;i++){
		
		for(j=1;j<t;j++){
			printf("%2d*%2d=%2d",i,j,i*j);
		
		} 		
		printf("\n");
		
	}
	
	return 0;	
	
}



