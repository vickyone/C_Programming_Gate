#include<stdio.h>

// float sum(float num){

//     float rem,sum = 0;
//     for(float i=num ;i>=1; i--){
//     rem = num % 10;
//     sum = sum +rem;
//     num = num / 10;
//     }
//     return sum;
    
// }
int sum1(int num){
    float rem,sum = 0;
    while(num != 0){
    rem = num % 10;
    sum = sum + rem;
    num = num/10;
    }
    return sum;
}

float main(){

    int  num;
    printf("Enter number\t");
    scanf("%d",&num);
    printf("The sum of digit is  :\t%d",sum1(num));
    return 0;
}