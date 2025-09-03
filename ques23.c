//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/





#include<stdio.h>
int main(){
int n;

printf("Enter the number of exceeded days: ");
scanf("%d", &n);

if(n>0 && n<=5){
printf("FINE = %d ruppees", 2 * n);
}

else if(n>5 && n<=10){
printf("FINE = %d ruppees", 4 * n);
}

else if(n>10 && n<=30){
printf("FINE = %d ruppees", 6 * n);
}

else{
printf("Your membership is cancelled");
}

return 0;
}

