#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int a[5]={0,0,0,0,0} ,x,y,b;
	
	//printf("請輸入金額: ");
	scanf("%d",&b);

	a[1]=b/10000;                  
	a[2]=(b%10000)/1000;           
	a[3]=((b%10000)%1000)/100;     
	a[4]=(((b%10000)%1000)%100)/10;
	a[5]=(((b%10000)%1000)%100)%10;
	
	if (b>99999||b<=0){
		printf("錯誤");	
		return 0;
	}
		
	
	
	for(x=1;x<=5;x=x+1){
		
		switch(a[x]){
			case 1:	printf("壹");
					break;
			case 2: printf("貳");
					break;
			case 3: printf("參");
					break;
			case 4: printf("肆");
					break;
			case 5:	printf("伍");
					break;
			case 6: printf("陸");
					break;
			case 7: printf("柒");
					break;
			case 8: printf("捌");
					break;
			case 9:	printf("玖");
					break;
			case 0: break;
		}
		
		if(a[x]==0){
			continue;
		}
		else{
			switch(x){
				case 1:	printf("萬");
						break;
				case 2: printf("仟");
						break;
				case 3: printf("佰");
						break;
				case 4: printf("拾");
						break;
				case 5:	break;
					}
		}
			

		}
	
		printf("元整");
	return 0;
}
