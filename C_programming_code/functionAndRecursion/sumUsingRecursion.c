#include<stdio.h>

int sum(int n){

    if(n == 1)
        return 1;
    int sum1toN_minus1 = sum(n-1);
    int sum1toN = sum(n-1) + n;
    

}

int main(){
    int n;
    printf("Enter natural number\n");
    scanf("%d",&n);
    printf("Sum :%d",sum(n));
}