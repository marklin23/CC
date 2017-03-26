#include <stdio.h>
#include <stdlib.h>

int x = 5;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void func()
{
	x = x + 1;
	printf("%d\n",x);
}



void func();

int main(){
	
	func();
	func();
	printf("%d\n",x);
	return 0;
}

