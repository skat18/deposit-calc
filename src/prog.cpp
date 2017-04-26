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

Cheak(&amount,&days);
Perform(&amount,&days);

printf("%d",amount);

return 0;
}

