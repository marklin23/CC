#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char ans[5];
	char keyin[5];
	gets(ans); //rand()+48;srand(time(NULL));
	int a=0,b=0;
	int i;
	
	while(a!=4){
		gets(keyin);
		a=0;
		b=0;
		for(i=0;i<4;i++){
			if(ans[i]==keyin[i]){
				a++;
			}
			else{
				//讓 ans[i]再跟 keyin裡的每個值都比過一次
					//如果 ans[i] 跟 keyin裡 有值相同的話
						//就讓 b 猜中的次數+1 
			}
		}
		
		printf("%dA%dB\n", a, b);
	}
	puts("You Win!");
	
	
	
	return 0;
}
