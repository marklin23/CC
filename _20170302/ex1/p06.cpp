#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c1;	
	int n1;
	float n2;
	double	n3;
	char c2;
	scanf("%c",&c1);
	scanf("%d",&n1);
	scanf("%f",&n2);  // 掠過文字 
	scanf("%lf",&n3);
	scanf(" %c",&c2);	//等文字  在%c 前面加空格 
	
	printf("%c\n",c1);
	printf("%d\n",n1);
	printf("%f\n",n2);
	printf("%lf\n",n3);
	printf("%c\n",c2);	
	
	system("pause");
	
	
	return 0;
	
	
}
