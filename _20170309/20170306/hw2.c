#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	a,b;
	
	scanf("%d\n%d",&a,&b);
	if(a>=60&&b>=70){
		printf("pass");
	}
	else{
		printf("fail");
	}	
	
	return 0;
}
