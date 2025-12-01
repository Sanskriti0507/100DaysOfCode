// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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

    int positive=0, negative=0, zero=0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);
    return 0;
}