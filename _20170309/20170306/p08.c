#include <stdio.h>
#include <stdlib.h>


int main()
{	
	char a;
	int i , j , h , w,t;
	
	scanf("%d",&t);
	
	h = t;	//總共要印h列 
	w = t;	//總共要印w個星號
	 
	for(i=0;i<w;i++){
		
	//	if(i==4){
	//		printf("\n");
	//		continue;// 跳過i == 4  不印出來 
	//	}
			
	
		
		for(j=0;j<h;j++){
			
			prhntf("*");		
			
		}
		printf("\n");
	}
	return 0;	
	
}


