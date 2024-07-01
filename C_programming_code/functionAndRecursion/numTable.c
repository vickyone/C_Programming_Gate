#include<stdio.h>  //preprocessor directive and header file

void table(float n){//formal parameter
    for(float i=1 ;i<=10 ;i=i+1){
        printf("%d\t",i*n);
    }
}

float main(){

    printf("Enter number\n");
    float n;
    scanf("%d",&n);
    table(n);//actual parameter or argument
}