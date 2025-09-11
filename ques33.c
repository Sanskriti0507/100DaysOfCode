// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/



#include<stdio.h>
int main(){
int n;
int orig, remainder;


printf("Enter a number: ");
scanf("%d", &n);

orig = n;

int sum = 0;

while(0 < n){
remainder = n % 10;
sum += remainder * remainder * remainder;
n = n / 10;
}

if(orig == sum){
printf("It is an armstrong number.");
}
else{
printf("It is not an armstrong number");
}

return 0;
}
