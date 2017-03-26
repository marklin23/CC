#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b;
	
	printf("請輸入兩個數字:");
	scanf("%f%f",&a,&b);
	
	printf("計算結果:\n");
	printf("%.2f + %.2f = %.2f\n",a,b,a+b);
	printf("%.2f - %.2f = %.2f\n",a,b,a-b);		
	printf("%.2f * %.2f = %.2f\n",a,b,a*b);
	printf("%.2f / %.2f = %.2f\n",a,b,a/b);
	system("pause");
	return 0;
}
