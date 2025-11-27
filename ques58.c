// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

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

    int min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    int max=arr[0];

    for(int j=0;j<n;j++){
        if(arr[j]>arr[0]){
            max=arr[j];
        }
    }


    printf("\nThe minimum of all the elements is %d", min);
    printf("\nThe maximum of all the elements is %d", max);
    
    return 0;
}