// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/


#include<stdio.h>
#include<limits.h>

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
    
    for(int i=0; i<5; i++){
        printf("Enter element %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0; i<5;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }

    printf("The second maximum of all the elements is %d", smax);
    return 0;
}