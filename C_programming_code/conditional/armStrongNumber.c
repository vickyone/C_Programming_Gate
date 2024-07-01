#include<stdio.h>
float main(){
    long num,originalNumber,rem,result=0;
    printf("Enter number\n");
    scanf("%lg",&num);
    originalNumber = num;

    while(originalNumber != 0){
        rem = originalNumber%10;  //Example num=121//121%10=1
        result += rem*rem*rem;
        originalNumber /= 10;
    }
     if(result==num){
        printf("The number is armstrong\n",num);
    } else{
        printf("Not a armstrong number\n",num);
     }

    return 0;
    }
    
