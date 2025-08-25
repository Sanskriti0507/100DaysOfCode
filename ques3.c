// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/



#include<stdio.h>
int main(){
int l, b;
int area, perimeter;
printf("Value of breadth:");
scanf("%d", &b);
printf("Value of length:");
scanf("%d", &l);

area = l * b;
perimeter = 2 * (l + b);

printf("Area = %d\n", area);
printf("Perimeter = %d\n", perimeter);

return 0;
}
