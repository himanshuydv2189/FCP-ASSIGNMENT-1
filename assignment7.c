//find largest element in an array
#include<stdio.h>
int main(){
    int n; 
    int arr[100];
    printf("enter the number of elements(1 to 100)");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter %d element of array",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("largest number is %d",arr[0]);
    return 0;
}