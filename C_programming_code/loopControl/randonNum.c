#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));//Initialize random seed based on current time
    // printf("%d\n",rand());
    // printf("%d\n",rand());

    // printf("Current time is %c",);

    while(1){
        int num = rand() % 21 - 10;//Generates random numbers from -10 to 10
        //print the generated number
        printf("Generated number : %d\n",num);

        //if the number is negative break the loop
        if(num < 0){
            printf("Negative number encountered,stooping the loop :\n");
            break;
        }

    }
return 0;
}