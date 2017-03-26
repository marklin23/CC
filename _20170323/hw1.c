#include <stdio.h>
#include <stdlib.h>
#define N 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};

typedef struct Employee emp;

int main(){
	int i ,sort_num,temp=0;
	emp Employee[N];
	
	for(i=0;i<N;i++){
		scanf("%s",&Employee[i].Name);
		scanf("%s",&Employee[i].Phone);
		scanf("%d",&Employee[i].id);
	}
	scanf("%d",&sort_num);
	
	
	for(i=0;i<N;i++){ 
		if(sort_num==Employee[i].id){
			printf("found\n");	
			printf("Name: %s\n",Employee[i].Name);
			printf("Phone: %s\n",Employee[i].Phone);
			printf("Id: %d\n",Employee[i].id);
			temp++;
		}
		
	} 
	
	if(temp==0){
		printf("not found\n");
	}
/*	while(1){
		i=0;
		if(sort_num==Employee[i].id && i<N){
			printf("found\n");	
			printf("Name: %s\n",Employee[i].Name);
			printf("Phone: %s\n",Employee[i].Phone);
			printf("Id: %d\n",Employee[i].id);
			break;
		}
		if(i=N-1){
			printf("not found\n");
			break;	
		}
		i++;
	}	*/
	
	
	
	return 0;
}

