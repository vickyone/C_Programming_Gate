#include<stdio.h>
#include<math.h>

//float squareNum();

float squareNum(float n){
    return pow(n,2);
}
float main(){
    printf("Enter a number\n");
    float n;
    scanf("%f",&n);
    n = squareNum(n);
    printf("Square of the given number  :\t%f",n);
}






