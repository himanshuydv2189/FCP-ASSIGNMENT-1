// program to calculate sum of all elements of array
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int arr[100];
    printf("enter number of elements in array(1 to 100)");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter %d element of array",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    } 
    printf("sum is %d",sum);
    return 0;
}