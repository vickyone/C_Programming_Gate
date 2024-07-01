#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    printf("Printed using %%d: %d\n",num);
    printf("Printed using %%i: %0.8i\n",num);//Symentical error//
    // We cannt escape percentage sign using '\' it gives us garbage value
    
}