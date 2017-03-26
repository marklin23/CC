#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int a[5]={0,0,0,0,0} ,x,y,b;

	//printf("½Ð¿é¤Jª÷ÃB: ");
	scanf("%d",&b);

	a[1]=b/10000;                  
	a[2]=(b%10000)/1000;           
	a[3]=((b%10000)%1000)/100;     
	a[4]=(((b%10000)%1000)%100)/10;
	a[5]=(((b%10000)%1000)%100)%10;
		
	if (b>99999||b<=0){
		printf("error");	
		return 0;
	}
	for(x=1;x<=5;x=x+1){	
			if(x<4){
					switch(a[x]){
					case 1:	printf("one ");
							break;
					case 2: printf("two ");
							break;
					case 3: printf("three ");
							break;
					case 4: printf("four ");
							break;		
					case 5:	printf("five ");
							break;
					case 6: printf("six ");
							break;
					case 7: printf("seven ");
							break;
					case 8: printf("eight ");
							break;
					case 9:	printf("nine ");
							break;
					case 0: break;
					}
			}
			else if (x>4&&a[x-1]!=1){
						switch(a[x]){
						case 1:	printf("one ");
								break;
						case 2: printf("two ");
								break;
						case 3: printf("three ");
								break;
						case 4: printf("four ");
								break;		
						case 5:	printf("five ");
								break;
						case 6: printf("six ");
								break;
						case 7: printf("seven ");
								break;
						case 8: printf("eight ");
								break;
						case 9:	printf("nine ");
								break;
						case 0: break;
						}
					}
				else if (x>4&&a[x-1]==1){
						switch(a[x]){
						case 1:	printf("eleven ");
								break;
						case 2: printf("twelve ");
								break;
						case 3: printf("thirteen ");
								break;
						case 4: printf("fourteen ");
								break;		
						case 5:	printf("fifteen ");
								break;
						case 6: printf("sixteen ");
								break;
						case 7: printf("seventeen ");
								break;
						case 8: printf("eighteen ");
								break;
						case 9:	printf("nineteen ");
								break;
						case 0: printf("ten ");
								break;
						}
					}
				else{
						switch(a[x]){
						case 1:	break;
						case 2: break;
						case 3: break;
						case 4: break;		
						case 5: break;
						case 6: break;
						case 7: break;
						case 8: break;
						case 9:	break;
						case 0: break;
					}
				}				
			
					
		if(a[x]==0){
			continue;
		}
		else{
			switch(x){
				case 1:	
						if(a[x]>1){
							printf("millions ");
							break;
						}
						else{
							printf("million ");
							break;							
						}

				case 2: 
						if(a[x]>1){
							printf("thousands ");
							break;
						}
						else{
							printf("thousand ");
							break;							
						}
						
				case 3: 
						if(a[x]>1){
							printf("hundreds ");
							break;
						}
						else{
							printf("hundred ");
							break;							
						}

				case 4: 
						switch(a[x]){
							case 1:	break;
							case 2: printf("twenty ");
									break;
							case 3: printf("thirty ");
									break;
							case 4: printf("forty ");
									break;		
							case 5:	printf("fifty ");
									break;
							case 6: printf("sixty ");
									break;
							case 7: printf("seventy ");
									break;
							case 8: printf("eighty ");
									break;
							case 9:	printf("ninety ");
									break;
							case 0: break;
						}						
						break;
				case 5:	break;
					}
		}
		


		}
		if(b<=1)
		printf("dollor");
		else
		printf("dollors");
		
		
	return 0;
}
