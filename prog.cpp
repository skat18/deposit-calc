#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>


void Cheak(int* amount,int* days);
void Perform(int* amount,int* days);


int main() {
int amount=0,days=0;
printf("Enter amount ");
scanf("%d,",&amount);
printf("Enter days ");
scanf("%d",&days);

Cheak(&amount,&days);
Perform(&amount,&days);

printf("%d",amount);

return 0;
}

void Cheak(int* amount,int* days){
if(*amount<10000|| *days<0 || *days>365 ){
Cheak(amount, days);
}
}

void Perform(int* amount,int* days){
	if(*days>0 && *days<=30) {
      *amount*=0.9;
	}
	if(*amount<=100000) {

	     if(*days>=31 && *days<=120) {
	        *amount*=1.02;
	    } 
		 if(*days>=121 && *days<=240) {
	        *amount*=1.06;
	    } 
		 if(*days>=241 && *days<=365) {
	        *amount*=1.12;
    	}
	} else if(*amount>100000) {
    	} 
		 if(*days>=31 && *days<=120) {
	      *amount*=1.03;
	    }
		 if(*days>=121 && *days<=240) {
	      *amount*=1.08;
	    } 
		 if(*days>=241 && *days<=365) {
	      *amount*=1.15;
	    }
}
