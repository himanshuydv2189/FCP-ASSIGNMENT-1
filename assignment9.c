// program to find minimum and maximum elements and average of an array
#include<stdio.h>
int main(){
    int arr[100];
    int n,min,max,sum;
    sum=0;
    float avg;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("minimum of array is %d",min);
    printf("maximum of array is %d",max);
    printf("average is %f",avg);
    return 0;
}