#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {

int cash=0, srok=0,vklad=0 ;

cout<<"Vvedite cash"<<endl;
cin>>cash;
cout<<"Vvedite srok"<<endl;
cin>>srok;

if(srok<365 && srok!=0){
    if(srok<=30){
    vklad=cash-cash*0.1;
    }
    else if(srok>=31 && srok<=120){
    vklad=cash+cash*0.02;
    }
}
return 0;
}