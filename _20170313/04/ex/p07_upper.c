#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char s1[100];
	int i;
	gets(s1);
	
	//for(i=0;i<100;i++){
	i = 0;
	while(s1[i] != '\0'){
		//�p�G �}�C������i�Ӧr �O�p�g����
		if(s1[i]>='a' && s1[i]<='z'){
			//�N�⥦��32�ܤj�g 
			s1[i]-=32;
		}
		i++;
	}
	
	printf("%s\n", s1);
	
	return 0;
}
