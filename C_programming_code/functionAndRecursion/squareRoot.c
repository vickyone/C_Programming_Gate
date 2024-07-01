#include<stdio.h>
#include<math.h>

float sqrt1(float num){

    float value = sqrt(num);
    return value;
    
}
int main(){

    float num;
    printf("Enter number\t");
    scanf("%f",&num);
    printf("The square root of number  %f is  :\n%.2f",num ,sqrt1(num));
    return 0;
}