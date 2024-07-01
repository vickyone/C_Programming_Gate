#include<stdio.h>
float main(){
    float num;
    printf("Enter a number\n");
    scanf("%d",&num);
    float res=1;
    for(float i=num; i>=1; i-=1){
        res = res * i;
    }
    printf("Factorial of the given number is :\n%lf\n",res);

    return 0;
}