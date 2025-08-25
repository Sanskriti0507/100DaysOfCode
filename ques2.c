// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/



#include<stdio.h>
int main(){
int a, b;
int sum, diff, prod, quot;
printf("Value of first number:");
scanf("%d", &a);
printf("Value of second number:");
scanf("%d", &b);

sum = a + b;
diff = a - b;
prod = a * b;

printf("Sum = %d,\t", sum);
printf("Difference = %d,\t", diff);
printf("Product = %d,\t", prod);

if(b != 0){
quot = a / b;
printf("Quotient = %d.", quot);
}
else{
printf("Quotient = undefined.");
}

return 0;
}


