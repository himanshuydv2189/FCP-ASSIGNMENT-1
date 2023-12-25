//simple intrest calculation
#include<stdio.h>
float main(){
    float p;
    float r;
    float t;
    printf("enter principal amount");
    scanf("%f",&p);
    printf("enter rate of intrest");
    scanf("%f",&r);
    printf("enter time period ");
    scanf("%f",&t);
    printf("intrest is %f",(p*r*t)/100);

    return 0;

}