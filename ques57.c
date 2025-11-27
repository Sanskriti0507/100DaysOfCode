// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/



#include<stdio.h>
int main(){
    int n;
    
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("The array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int sum=0;

    for(int j=0;j<n;j++){
        sum+=arr[j];
    }

    printf("\nThe sum of the elements of the array is:%d", sum);
    return 0;
}