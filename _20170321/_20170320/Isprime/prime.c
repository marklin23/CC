#include<stdio.h>
#include<stdlib.h>
#include "prime.h"


int IsPrime(int n){
	int i=n-1;
	int x=0;
	
	if(i>1){
		while(i<n){
		if(n%i==0){
			if(i==1){
				x=1;
			}
			else{
				x=0;
			}
			break;
		}
		else{
				i--;
		}
			
	}
	}
	


		return x;
}
