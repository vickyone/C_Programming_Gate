#include<stdio.h>  //preprocessor directive and header file

float sum(float x,float y){
    return x + y;
}

float main(){

    printf("Enter two number\n");
    float num1,num2;
    scanf("%f %f",&num1,&num2);
    float sumation= sum(num1,num2);
    printf("Sum is :%f",sumation);
    return 0;
}