// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/




#include<stdio.h>
int main(){
int sec, hour, minute, second;
printf("Enter time in seconds:");
scanf("%d", &sec);

hour = sec / 3600;
minute = (sec % 3600) / 60;
second = sec % 60;

printf("Hours:Minutes:Seconds = %d:%d:%d", hour, minute, second);

return 0;
}

