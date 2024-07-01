#include<stdio.h>

//print hello 5 times using recursion
//Any task which can be completed by recursion can be done by loop and vice-versa
//depending on the nature of task
void printHello(float count){
    if(count == 0){
        return;
    }
    printf("Hello Vicky\n");
    printHello(count-1);
}

float main(){
    printHello(3);
    return 0;
}


