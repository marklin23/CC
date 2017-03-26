#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct __PHONEBOOK{
	
	char name [32];
	char phone[11];
	char email[20];
	int  id;
	
};

typedef struct __PHONEBOOK contact;


int main(){
	FILE *f1;
	FILE *f2;
	char iKey, i = 0,j=0, k, l;
	char file_name[80];
	char read_file[80];
	char zero[30] = {'\0'};
	char d[20];
	char str_temp[80];
	contact person[N];  
	contact read[N];

	
		while(iKey!='q'){
			scanf("%c",&iKey);
			switch(iKey){
			case 'i':	
					//	printf("please enter basic infomation\n");
						scanf("%s",&person[j].name);
						scanf("%s",&person[j].phone);
						scanf("%s",&person[j].email);
						//person[j].id=j+1;
						j++;
					//	printf("done\n");
						break;
					
			case 'l':	
						for(k=0;k<j;k++){ 	
							printf("Name: %s\n",person[k].name);
							printf("Phone: %s\n",person[k].phone);
							printf("Email: %s\n",person[k].email);
							//printf("=====================================\n");
						//	printf("ID: %s\n",person[k].id);
						}
						//j=0;
						break;
					
			case 's':	
						//printf("輸入檔名\n");
						scanf("%s",&file_name);
						f1 = fopen(file_name,"w");
						
						
						for(k=0;k<j;k++){ 	
							fprintf(f1,"%s ",person[k].name);
							fprintf(f1,"%s ",person[k].phone);
							fprintf(f1,"%s\n",person[k].email);
							//fprintf(f1," 0 ");
						}	
					//	printf("存檔OK\n");
						
						fclose(f1);
						break;
					
			case 'o':	
						//printf("輸入檔名\n");
						scanf("%s",&read_file);
						f2 = fopen(read_file,"r");
						k = 0 ;
						j = 0 ;
							while(1){
									
								fscanf(f2,"%s",&person[k].name);
								fscanf(f2,"%s",&person[k].phone);
								fscanf(f2,"%s",&person[k].email);

								if(feof(f2)){
									break;	
								}
								j++;
								k++;	
							}
					//	printf("finish\n");
						fclose(f2);
						break;
				
			case 'q':	//printf("\n");
						break;
						
			case 'c':	
						//printf("clear all content\n");
						
						for(k=0;k<j;k++){
							
							strcpy(person[k].name,zero);
							strcpy(person[k].phone,zero);
							strcpy(person[k].email,zero);	
						}
						j=0;
						//printf("done\n");
						break;
			default: 	
						break;
			}
			
		}

	
	return 0;
}

