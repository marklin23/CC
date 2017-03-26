#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i , j , t=0,k;
	
	scanf("%d",&t);
	
	for(i=t;i>0;i--){
		
		for(j=0;j<i;j++){
			printf("*");
		
		} 		
		printf("\n");
	}
	
	return 0;	
	
}



