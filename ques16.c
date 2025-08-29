// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/




#include<stdio.h>
int main(){
int a, b, c;

printf("Value of a= ");
scanf("%d", &a);
printf("Value of b= ");
scanf("%d", &b);
printf("Value of c= ");
scanf("%d", &c);

if(a>b && a>c){
printf("a is greatest.");
}
else if(b>a && b>c){
printf("b is greatest.");
}
else if(c>a && c>b){
printf("c is greatest.");
}

return 0;
}
