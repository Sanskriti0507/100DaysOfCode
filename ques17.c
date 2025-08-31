// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/





#include <stdio.h>
#include<math.h>


int main() {
float a, b, c;
float D;


printf("Enter coefficients a, b and c: ");
scanf("%f %f %f", &a, &b, &c);

if (a == 0) {
printf("Not a quadratic equation.\n");
return 0;
}

D = b*b - 4*a*c;

if (D > 0) {
printf("Roots are real and distinct.\n");
printf("Root1 = %f\n ", -b + (sqrt(D)) / 2*a);
printf("Root2 = %f\n ", -b - (sqrt(D)) / 2*a);
}
else if (D == 0) {
printf("Roots are real and equal.\n");
printf("Root1 = Root2 = -%f / %f = %f\n", b, 2*a, (-b)/(2*a));
}
else {
printf("Roots are complex and imaginary.\n");
}

return 0;
}

