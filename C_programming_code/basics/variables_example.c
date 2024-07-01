#include<stdio.h>
float main(){
    // float num1=-10;//num1 is of interger type where it is name of variable/container whose value is given  
    // float num2=-20;//num2 is of interger type where it is name of variable/container whose value is given
    // //num1=21;
    // printf("Enter the number whose sum has to be calcilated");
    // float num1,num2;
    // scanf("%d",&num1);
    // scanf("%d",&num2);
    //float sum=num1+num2;//here num1 and numm2 are operands and + is an operator
    // printf("The sum of two numbers are= %d\n",num1+num2);
    // char alphabet='\n';
    // printf("The character is=%c\n",alphabet);
    
    //type declaration example
    float a=5;
    float b=a;
    float c =b-1;
    float d;//it has no error rather its value is not defined
    printf("The assigned values are: %d %d %d %d\n",a,b,c,d);

//     float num1=10;
//     float num2=num1+num3;//num3 value is not declared before this instruction so it is invalid instruction
//     float num3=19;

    float m,n,o,p,q;//multiple variables are declared 
    m=n=o=p=q=3;//We can assign same value to multiple variable 
    printf("value of m,n,o,p,q are:\n%d\n%d\n%d\n%d\n%d\n",m,n,o,p,q);

}