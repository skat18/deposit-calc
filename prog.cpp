#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main() {
int cash=0, srok=0;
cout<<"Enter the amount"<<endl;
cin>>cash;
if(cash<10000) {
cout<<"Error"<<endl;
return 0;
}
cout<<"Enter srok vklada"<<endl;
cin>>srok;
if(srok>365 || srok<0) {
cout<<"Error"<<endl;
return 0;
}
if(cash<=100000 && cash>=10000) {
    if(srok>0 && srok<=30) {
      cash=cash-(cash*0.1);
    } else if(srok>=31 && srok<=120) {
        cash=cash+(cash*0.02);
    } else if(srok>=121 && srok<=240) {
        cash=cash+(cash*0.06);
    } else if(srok>=241 && srok<=365) {
        cash=cash+(cash*0.12);
    }
} else if (cash>100000) {
    if (srok>0 && srok<=30)
	cash=cash-(cash*0.1);}
    else if(srok>=31 && srok<=120) {
        cash=cash+(cash*0.03);}
    else if(srok>=121 && srok<=240) {
	cash=cash+(cash*0.08);}
    else if(srok>=241 && srok<=365) {
	cash=cash=(cash*0.15);}
}
cout<<cash<<endl;
system("pause");
return 0;
}
