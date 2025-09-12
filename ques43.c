// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/





#include<stdio.h>
int main(){

int n, orig, remainder;

printf("Enter a number: ");
scanf("%d", &n);

int sum = 0;
orig = n;

while(n>0){
remainder = n % 10;
	int fact = 1;
	for(int i = 1; i<=remainder; i++){
	fact *= i;
	}
sum += fact;
n = n / 10;
}

if(orig == sum){
printf("Strong number");
}
else{
printf("Not a strong number");
}

return 0;
}
