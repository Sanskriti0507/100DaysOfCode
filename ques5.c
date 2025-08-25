// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/





#include<stdio.h>
int main(){
float c;
printf("The temperature in celcius is=");
scanf("%f", &c);

// To convert temp in farenhiet --> (c * 9/5) + 32)

printf("The temperature in fahrenhiet is %f", (c * 9/5) + 32);

return 0;
}
