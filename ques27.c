// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/





#include<stdio.h>
int main(){
int n, i;
int sum = 0;

printf("Enter n: ");
scanf("%d", &n);

for(i=1; i<=2*n; i+=2){
sum += i;
}

printf("The sum of the first %d odd numbers is %d", n, sum);
return 0;
}

