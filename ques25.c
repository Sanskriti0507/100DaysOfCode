// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/


#include<stdio.h>

int main(){
int a, b;
char operator;
char input;

do{

printf("Do you want to use the calculator? (y/n)");
scanf(" %c", &input);

if (input == 'n' || input == 'N') {
printf("Exiting program.\n");
break;
}

printf("Enter first number: ");
scanf("%d", &a);

printf("Enter second number: ");
scanf("%d", &b);

printf("Enter operator (+,-,*,/,%): ");
scanf(" %c", &operator);

int result;

switch (operator) {
case '+':
result=a+b;
printf("The sum is %d\n", result);
break;

case '-':
result=a-b;
printf("The difference is %d\n", result);
break;

case '*':
result=a*b;
printf("The product is %d\n", result);
break;

case '/':
if (b != 0){
result=a/b;
printf("Dividing a by b gives %d\n", result);
}
else{
printf("Invalid");
}
break;

case '%':
if (b != 0) {
result = a % b;
printf("The remainder is %d\n", result);
}
else {
printf("Invalid: Division by zero not allowed.\n");
}
break;

default:
printf("Enter valid operator\n");
}

} while(input == 'y' || input == 'Y');

return 0;

}


