#include <stdio.h>
#include <stdlib.h>5


int main()
{
	int n=1 , a , i ;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		n = n*i;
	}
	printf("%d",n);
	return 0;
}


