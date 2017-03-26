#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i , j , t=0,k;
	
	scanf("%d",&t);
	 k=t;
	for(i=0;i<t;i++){
		
		for(j=0;j<k;j++){
			printf("*");
		
		} 		
			k=k-1;
		printf("\n");
	}
	
	return 0;	
	
}



