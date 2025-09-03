// Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/






#include<stdio.h>
int main(){
int n;

printf("Units: ");
scanf("%d", &n);

if(n>0 && n<=100){
printf("BILL = %d ruppees", 5 * n);
}

else if(n>100 && n<=200){
printf("BILL = %d ruppees", 7 * n);
}

else if(n>200 && n<=300){
printf("BILL = %d ruppees", 10 * n);
}

else{
printf("BILL = %d ruppees", 12 * n);
}

return 0;
}
