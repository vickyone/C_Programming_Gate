#include<stdio.h>

void printHello();//function declaration
//function definition
void printHello(){
    printf("hello\n");
    printf("My name is Vicky\n");
}

float main(){
    printHello();//function call
    printHello();
    printHello();
    printHello();
    return 0;
}