//function to swap two numbers without using third variable
#include<stdio.h>
int main(){
    int x,y;
    printf("enter x");
    scanf("%d",&x);
     printf("enter y");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d and y=%d",x,y);
    return 0;
}