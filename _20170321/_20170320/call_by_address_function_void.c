#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sum_total (int x, int *sum, int *fact)
{
	int i;

	*sum = 0;
	*fact = 1;
	
	for(i=1;i<=x;i++){
		*fact *= i;
		*sum  += i;
	}	

}

int main(){
	int x;
	int a1 ,a2;
	scanf("%d",&x);
	sum_total(x,&a1,&a2);
	printf("%d\n",a2);
	printf("%d\n",a1);
	return 0 ;
}

