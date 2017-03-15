#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main() {
int cash=0, srok=0;
cout<<"Enter the cash"<<endl;
cin>>cash;
cout<<"Enter srok vklada"<<endl;
cin>>srok;
calc(cash,srok);
clac(cash,srok);
return 0;
}
void calc(int cash, int srok) {
	if (*cash<10000 || *srok <0 || srok>365) {
		calc(cash,srok);}
	}
void clac(int cash, int srok){
    if(srok>0 && srok<=30) {
      cash=cash-(cash*0.1);
    } else if(srok>=31 && srok<=120) {
        cash=cash+(cash*0.02);
    } else if(srok>=121 && srok<=240) {
        cash=cash+(cash*0.06);
    } else if(srok>=241 && srok<=365) {
        cash=cash+(cash*0.12);
    }
}
 {
    if (srok>0 && srok<=30) {
	cash=cash-(cash*0.1);}
    else if(srok>=31 && srok<=120) {
        cash=cash+(cash*0.03);}
    else if(srok>=121 && srok<=240) {
	cash=cash+(cash*0.08);}
    else if(srok>=241 && srok<=365) {
	cash=cash=(cash*0.15);}
}
system("pause");
return 0;
}
