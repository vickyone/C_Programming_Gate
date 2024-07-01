#include<stdio.h>

float main(){
    float cost[3];
    printf("Enter cost of Biscuit\t");
    scanf("%f",cost[0]);

    printf("Enter cost of Tea\t");
    scanf("%f",cost[1]);

    printf("Enter cost of Shampoo\t");
    scanf("%f",cost[2]);

    
    printf("Final Price of all products\t = %f\t%f\t%f",cost[0]+(0.05*cost[0]),cost[1]+(0.05*cost[1]),
    cost[2]+(0.05*cost[2]));

    return 0;
}