#include <stdio.h>
#include <stdlib.h>

int Cheak(int amount,int days){
if(amount<10000|| days<0 || days>365 ){
return 1;
} return 0;
}

int Perform(int amount,int days){
	if(days>0 && days<=30) {
      amount*=0.9;
	}
	if(amount<=100000) {

	     if(days>=31 && days<=120) {
	        amount*=1.02;
	    } 
		 if(days>=121 && days<=240) {
	        amount*=1.06;
	    } 
		 if(days>=241 && days<=365) {
	        amount*=1.12;
    	}
	} else if(amount>100000) {
    	} 
		 if(days>=31 && days<=120) {
	      amount*=1.03;
	    }
		 if(days>=121 && days<=240) {
	      amount*=1.08;
	    } 
		 if(days>=241 && days<=365) {
	      amount*=1.15;
	    }
return amount;
}
