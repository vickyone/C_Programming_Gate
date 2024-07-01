#include<stdio.h>
int main(){
    unsigned int num;
    printf("Enter a number\n");
    scanf("%u",&num);

    printf("Printed using %%u: %u\n",num);
    printf("Printed using %%u: %3u\n",num);

    // unsigned integer only take positive value otherwise big number is printed 2's complement
    // it will not give garbage value
    
}