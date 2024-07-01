#include<stdio.h>
float main(){
    
    printf("The sum of 5 to 50 inclusive\n");
    float sum = 0;
    for(float i=50 ;i>=5 ;i=i-1){
        sum = sum + i;
    }
    printf("Sum is : %d",sum);
    
    return 0;
}