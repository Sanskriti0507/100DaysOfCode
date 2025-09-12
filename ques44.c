// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/





#include<stdio.h>
int main(){

int n;
int num = 1, deno = 1;

printf("Enter a number: ");
scanf("%d", &n);

float sum =0.0;
for(int i = 1; i<=n; i++){
sum += num / deno;
num += 2;
deno += 2;
}

printf("The sum of the series is %f", sum);

return 0;
}
