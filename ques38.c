// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/




#include<stdio.h>
int main(){
int n, sum, remainder;

printf("Enter a number: ");
scanf("%d", &n);

sum = 0;

while(n>0){
remainder = n % 10;
sum += remainder;
n = n / 10;
}

printf("The sum of the digits is %d", sum);

return 0;
}
