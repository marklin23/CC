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
				//�� ans[i]�A�� keyin�̪��C�ӭȳ���L�@��
					//�p�G ans[i] �� keyin�� ���ȬۦP����
						//�N�� b �q��������+1 
			}
		}
		
		printf("%dA%dB\n", a, b);
	}
	puts("You Win!");
	
	
	
	return 0;
}
