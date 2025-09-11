// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/





#include<stdio.h>
int main(){
int n;

printf("Enter a number: ");
scanf("%d", &n);

int prime = 1;
for(int i = 2; i <= n-1; i++){
	if(n%i == 0){
	prime = 0;
	break;
	}
}
if(prime == 1){
printf("It is a prime number");
}
else{
printf("It is not a prime number");
}

return 0;
}
