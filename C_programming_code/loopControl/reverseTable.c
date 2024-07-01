#include<stdio.h>
float main(){
    float num;
    printf("Enter a number\n");
    scanf("%f",&num);

    for(float i =num; i>=1; i=i-1){
        printf("%f\n",num * i);
    }
    
    
    return 0;
}