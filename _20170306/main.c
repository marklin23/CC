#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float h,w, BMI;
	
	scanf("%f%f",&h,&w);
	BMI=w/((h/100)*(h/100));
	
	if(BMI>=35)
		printf("%.2f\nObese Class III",BMI);
	else if(BMI>=30)
		printf("%.2f\nObese Class II",BMI);
	else if(BMI>=27)
		printf("%.2f\nObese Class I",BMI);
	else if(BMI>=24)
		printf("%.2f\nOverweight",BMI);
	else if(BMI>=18.5)
		printf("%.2f\nNormal",BMI);			
	else 
		printf("%.2f\nUnderweight",BMI);	
			
	return 0;
}
