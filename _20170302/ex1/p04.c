#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//system("pause");
	int v1 = 10;
	double v2= 22.1111;
	float v3 = 22.2311;
	char v4	=	'G';
	double v5;
//	v5 = v1+v2;
	
	//sizeof(int);
	//sizeof(double);
	//sizeof(long double);
	int num;
//	printf("print a int");
	scanf( "%d", &num);
	printf("%d\n",num);//int %d 秈俱计
						//%c じ
//%f 疊翴计(float)计翴Α
//%lf 疊翴计(double)计翴Α	
	printf("%.4f\n", v2);//float
	printf("%.2f,%d,%C\n", v2,num,v4);//float 计翴
						//ㄌ癸莱Print 竚	
	printf("|%-5d|",55);
	printf("|%5d|",55);
	printf("|%10d|",987654321);
	printf("|%010d|",987654321);	
	
	system("pause");
	return 0;
	
	
}
