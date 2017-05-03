#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include "fukn.h"

using namespace std;

int main() {
int amount=0,days=0;
cout<<"Enter amount ";
cin>>amount;
cout<<"Enter days ";
cin>>days;

if (Cheak(&amount,&days)) {cout << "Error"; return 1;}
Perform(&amount,&days);

printf("%d",amount);

return 0;
}

