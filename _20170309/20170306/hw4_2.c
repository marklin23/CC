#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, sum=0;
	int i;
	scanf("%d",&n);
	sum = (1+n)*n/2;
	for(i=1;i<=n-1;i++){
		printf("%d+",i);
	}
		printf("%d = %d",n,sum);
		
	return 0;
}
 
 