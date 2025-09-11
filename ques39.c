// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/




#include<stdio.h>
int main(){
int n, remainder;

printf("Enter a number: ");
scanf("%d", &n);

int prod = 1;

while(n>0){
remainder = n % 10;
	if(remainder%2 != 0){
	prod *= remainder;
	}
n = n / 10;
}

printf("The product of the odd digits of the number is %d", prod);

return 0;
}
