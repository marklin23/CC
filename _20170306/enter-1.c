#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0 , p=0, sum=0;
	float avg =0;
	int a, b ,c;
	int min = 0;
	int max = 0;
	int max_p=0;
	
	while(p!=-1){
		
		scanf("%d",&p);
		if(p!=-1){
			sum +=p;
			i++; 
		}
		if(max<p){
			max = p;
			max_p = i+1;
		}
		
	}
	
	avg = (float) (sum/(i+1));


	
	printf("%d\n%.1f\n%d\n%d\n",sum,avg,max,max_p); 
	system("pause");
	return 0;
}
