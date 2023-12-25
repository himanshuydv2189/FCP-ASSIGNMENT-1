// write a function to swap two numbers using a third variable
#include<stdio.h>
void swap(int*a,int*b);
int main(){
    int x,y;
    printf("enter x");
    scanf("%d",&x);
     printf("enter y");
    scanf("%d",&y);
    swap(&x,&y);
    printf("x=%d and y=%d",x,y);
    return 0;
}
void swap(int*a,int*b){
    int t=*a;
    *a=*b;
    *b=t;
}