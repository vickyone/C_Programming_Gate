#include<stdio.h>

float sensetion(float temp){

    if(temp <=15){
        printf("It is cold\n");
    } else{
        printf("It is hot\n");
    }
    return temp;
}

int main(){

    float temp;
    printf("Enter temperature\n");
    scanf("%f",&temp);
    sensetion(temp);
}