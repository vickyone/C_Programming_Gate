#include<stdio.h>

int fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextterm = t1 + t2;
    for(int i=3;i<=n;i++){
        printf("%d",nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    return nextterm;
    
}

int main(){
    int n;
    pr4intf("Enter the number of terms\n");
    scanf("%d",n);
    printf("The series is as followes\t:",fib(n));

    

}