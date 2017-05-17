#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
int amount=0,days=0;
printf("Enter amount ");
scanf("%d", &amount);
printf("\n Enter days ");
scanf("%d", &days);

if (Cheak(amount,days)) {printf("\n Error \n"); return 1;}
amount = Perform(amount,days);

printf("%d",amount);

return 0;
}

