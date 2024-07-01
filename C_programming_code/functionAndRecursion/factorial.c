#include<stdio.h>

int fact(int n){
    if(n == 1)
        return 1;
    
    int factorial = fact(n-1) * n;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("fact= %d",fact(n));
}