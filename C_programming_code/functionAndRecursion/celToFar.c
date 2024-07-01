#include<stdio.h>

float celToFar(float temp);//function declaration

float celToFar(float temp){
    float fahrenheit;

    fahrenheit = temp *(9.0f/5.0f) +32;
    return fahrenheit;
}


float FartoCel(float temp){
    float celcius;

    celcius = (temp -32) *5.0f/9.0f;
    return celcius;
}

float main(){
    
    float temp;
    printf("Enter temperature in celcius  :\t\n");
    scanf("%f",&temp);
    printf("The respective temperature in fahrenheit  :\t%f\n",celToFar(temp));

    printf("Enter temperature in fahrenheit :\t\n");
    scanf("%f",&temp);
    printf("The respective temperature in celcius  :\t%f\n",FartoCel(temp));
    return 0;
}