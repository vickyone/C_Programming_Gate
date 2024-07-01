#include<stdio.h>

char ch;


//function declaration and definition
void userIndian(){
    printf("Namaste\n");
}

void userFrench(){
    printf("Bonjour\n");
    userIndian();
}

int main(){
    printf("Enter i or f\n");
    scanf("%ch",&ch);

    if(ch == 'i'){
        userIndian();
    }
    else{
        userFrench();
    }
    
    return 0;
}