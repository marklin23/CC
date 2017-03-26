#include <stdio.h>
#include <stdlib.h>


int main()
{	
	float weight, height , BMI=0;
	scanf("%f%f",&height,&weight);
	
	BMI = weight / ((height/100)*(height/100));
	
		if(BMI>=35)
			printf("%.2f\nVery severely obese",BMI);
		else if(BMI>=30)
			printf("%.2f\nSeverely obese",BMI);			
		else if(BMI>=27)
			printf("%.2f\nModerately obese",BMI);	
		else if(BMI>=24)
			printf("%.2f\nOverweight",BMI);	
		else if(BMI>=18.5)
			printf("%.2f\nNormal",BMI);	
		else if(BMI<18.5)
			printf("%.2f\nUnderweight",BMI);

		return 0;	
	
}


