// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/





#include <stdio.h>

int main() {
float CP, SP;

printf("Enter Cost Price: ");
scanf("%f", &CP);

printf("Enter Selling Price: ");
scanf("%f", &SP);

if (SP > CP) {
printf("Profit Percentage = %f%%", ((SP - CP) / CP) * 100);
}
else if (SP < CP) {
printf("Loss Percentage = %f%%", ((CP - SP) / CP) * 100);
}
else {
printf("No Profit, No Loss.");
}

return 0;
}

