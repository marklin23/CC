#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int a[5]={0,0,0,0,0} ,x,y,b;
	
	//printf("�п�J���B: ");
	scanf("%d",&b);

	a[1]=b/10000;                  
	a[2]=(b%10000)/1000;           
	a[3]=((b%10000)%1000)/100;     
	a[4]=(((b%10000)%1000)%100)/10;
	a[5]=(((b%10000)%1000)%100)%10;
	
	if (b>99999||b<=0){
		printf("���~");	
		return 0;
	}
		
	
	
	for(x=1;x<=5;x=x+1){
		
		switch(a[x]){
			case 1:	printf("��");
					break;
			case 2: printf("�L");
					break;
			case 3: printf("��");
					break;
			case 4: printf("�v");
					break;
			case 5:	printf("��");
					break;
			case 6: printf("��");
					break;
			case 7: printf("�m");
					break;
			case 8: printf("��");
					break;
			case 9:	printf("�h");
					break;
			case 0: break;
		}
		
		if(a[x]==0){
			continue;
		}
		else{
			switch(x){
				case 1:	printf("�U");
						break;
				case 2: printf("�a");
						break;
				case 3: printf("��");
						break;
				case 4: printf("�B");
						break;
				case 5:	break;
					}
		}
			

		}
	
		printf("����");
	return 0;
}
