#include<stdio.h>

float fib(float num){
    // if(num ==0 || num ==1)
    if(num==0){
        return 0;
    }
    if(num ==1){
        return 1;
    }

    float fibb = fib(num-1) + fib(num-2);
    printf("Fib of %d is :",num,fibb);
    return fibb;
}

float main(){
    
    float num;
    printf("Enter a number   :\t\n");
    scanf("%d",&num);
    printf("%d",fib(num)); 
    return 0;
}

