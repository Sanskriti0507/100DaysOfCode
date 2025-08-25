// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/




#include<stdio.h>
int main(){
float p, r, t;
float si, ci;
int i;
printf("Principal = ");
scanf("%f", &p);
printf("Rate = ");
scanf("%f", &r);
printf("Time = ");
scanf("%f", &t);

si = (p * r * t) / 100;

float A;
A = p;
for(i=0;i<t;i++){
A = A + (A * r / 100);
}

ci = A - p;

printf("Simple interest = %f\n", si);
printf("Compound interest = %f\n", ci);

return 0;
}
