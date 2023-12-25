//program to traverse an array and print the odd indexed elements
#include<stdio.h>
int reverse(int arr[], int n);
void printarr(int arr[],int n);
int main(){int n; 
    int arr[100];
    printf("enter the number of elements(1 to 100)");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter %d element of array",i+1);
        scanf("%d",&arr[i]);
        }
        reverse(arr,n);
        printarr(arr,n);
        return 0;
    }

     int reverse(int arr[], int n) {
        for(int i=0;i<n/2;i++){
            int firstval=arr[i];
            int secondval=arr[n-i-1];
            arr[i]=secondval;
            arr[n-i-1]=firstval;

        }
     }

     void printarr(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d\t", arr[i]);
        }
     }
