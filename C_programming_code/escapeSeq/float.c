#include<stdio.h>
int main(){
    float num;
    printf("Enter a number\n");
    scanf("%f",&num);

    printf("Printed using %%f: %14f\n",num);
    printf("Printed using %%f: %10.6f\n",num);
    printf("Printed using %%e: %e\n",num);
    printf("Printed using %%E: %E\n",num);

    // unsigned integer only take positive value otherwise big number is printed 2's complement
    // it will not give garbage value
    
}