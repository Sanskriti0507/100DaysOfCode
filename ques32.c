// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/




#include<stdio.h>
int main(){
int n, remainder;
int rev=0;
int orig;

printf("Enter a number: ");
scanf("%d", &n);

orig = n;


while(n>0){
remainder = n % 10;
rev = rev * 10 + remainder;
n = n / 10;
}

if(orig == rev){
printf("It is palindrome.");
}
else{
printf("It is not palindrome.");
}

return 0;
}
