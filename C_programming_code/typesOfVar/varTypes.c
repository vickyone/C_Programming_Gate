#include<stdio.h>


int x = 10;//global variable
static int y = 10;//static variable
int fun(){
    //int x = 10;  //local variable
    //static int y = 10;//static variable
    x = x+1;  
    y = y+1;
    printf("x = %d and y = %d\n",x,y);
}

int main(){
    fun();
    fun();
    fun();
}