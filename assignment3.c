//calculate the sum of natural numbers upto n
#include<stdio.h>
int main(){
    int n;
    printf("enter the natural number");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
        
    }
    printf("sum is %d",sum);
    return 0;
}