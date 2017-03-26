#include <stdio.h>
#include <stdlib.h>
#define N 30
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	FILE *f1;
	FILE *f2;
	int i=0,n;
	char str [80];
	float num;
	float f[100] , r;
	
	f1 = fopen("text.txt","w");
	n = 0 ;
	while(1){

		scanf("%f",&f[i]); 
		if(f[i]==(float)-1)
			break;
		fprintf(f1,"%f ",f[i]);
		i++;
		//printf("%.1f",f);	
	}
	fclose(f1);
	f2 = fopen("text.txt","r");
	while(1){
		fscanf(f2,"%f ",&num);
		
		printf("%.1f ",num);
		if(feof(f2))
			break;	
	}
	fclose(f2);

	
	return 0;
}

