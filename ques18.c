// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/



#include<stdio.h>
int main(){
float a;

printf("Enter percentage: ");
scanf("%f", &a);


if(a>=90){
printf("GRADE: A");
}
else if(a>=80 && a<90){
printf("GRADE: B");
}
else if(a>=60 && a<80){
printf("GRADE: C");
}
else if(a>=40 && a<60){
printf("GRADE: D");
}
else{
printf("GRADE: F");
}


return 0;
}


