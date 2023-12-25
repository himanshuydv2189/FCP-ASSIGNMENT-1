//convert temp far to celcius
#include<stdio.h>
float converttemp(float far);
int main(){
    float far;
    printf("enter temp in fahrenheit");
    scanf("%f",&far);
    float celcius=converttemp(far);
    printf("celcius : %f",celcius);
    return 0;
}
float converttemp(float far){
    float celcius=(far-32)*(5.0/9.0);
    return celcius;
}