#include<stdio.h>
int main(){

    int numberOfSets ,numberOfNumbers,num,sum;
    printf("Enter number of test cases   :\t");
    scanf("%d",&numberOfSets);

    for(int i = 0; i<numberOfSets; i++){
        printf("Enter numberOfNumbers in each test cases  :\t");
        scanf("%d",&numberOfNumbers);

        sum = 0;
        for (int j = 0; j < numberOfNumbers; j++)
        {
            // printf("Enter numbers in each set\t");
            /* code */
            scanf("%d",&num);
            if(num < 0)
                continue;

            sum += num;
        }
        printf("Sum of positive numbers  : %d\n",sum);
    }
    return 0;
}