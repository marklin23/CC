#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	a,b,ro;
	
	scanf("%d%d",&ro,&a);
	
	if(a>100){
		printf("score error");	
		
	}else if(ro>2){
		printf("roll error");	
	}
	else if(a>=60&&ro==1){
		printf("pass");
	}
	else if (a>=70){
		printf("pass");
	}	


	else{
		printf("fail");
	}
	return 0; // µ²§ôµ{¦¡ 
	
}
