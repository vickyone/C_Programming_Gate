#include<stdio.h>
#include<math.h>

int square(int n){
    return pow(n,2);
    
}

int cube(int n1){
    return n1*n1*n1;
    int n;
    square(n);
}

int main(){
    int num,n,n1;
    n=num;
    n1 = num;
    printf("Enter a number\n");
    scanf("%d",&num);
    n1 = cube(n1);
 
    printf("Square and cube =%d %d",n,n1);
}
