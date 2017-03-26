#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,sum;
	char c;
	
	scanf("%f%f %c",&a,&b,&c);
	
	switch(c){
		case'+':
				sum=a+b;
				break;
		case'-':
				sum=a-b;
				break;
		case'*':
				sum=a*b;
				break;
		case'/':
				sum=a/b;
				break;
		default:
				sum=0;
				return 0;
			
	}
	
	
	printf("%.2f %c %.2f = %.2f",a,c,b,sum);
	return 0;
}


