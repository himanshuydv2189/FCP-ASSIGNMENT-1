//temp conversion from celcius to fahrenheit
#include<stdio.h>
float converttemp(float celcius);
int main(){
    float celcius;
    printf("enter temp in celcius");
    scanf("%f",&celcius);
    float far=converttemp(celcius);
    printf("far : %f",far);
    return 0;
}
float converttemp(float celcius){
    float far=celcius*(9.0/5.0)+32;
    return far;
}