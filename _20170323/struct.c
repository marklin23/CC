#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
struct _PC{

	char CPU[50];
	int Mem;
	float HD; 
	
};

typedef struct _PC PC;

int main(){
	
	PC p1 = {"INTEL i7" , 16, 1.5};
	PC p2 = {"INTEL i7" , 13, 1.4};			
    PC *p3;
    
	p3 = &p2;
	
	
	
	printf("PC1\nCPU:%s\nMem:%d\nHD:%.2f\n",p1.CPU,p1.Mem,p1.HD); 
	printf("PC2\nCPU:%s\nMem:%d\nHD:%.2f\n",p2.CPU,p2.Mem,p2.HD); 	
	printf("PC3\nCPU:%s\nMem:%d\nHD:%.2f\n",(*p3).CPU,(*p3).Mem,(*p3).HD); 	
	
	
	
	return 0;
}
