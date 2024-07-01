#include<stdio.h>


void userIndian();//function declaration
void userFrench();//function declaration


void userIndian(){
    printf("Namaste\n");
}
void userFrench(){
    printf("Bonjour\n");
}


float main(){
    printf("Enter i for Indian and f for French\n");
    char ch;
    scanf("%c",&ch);
    
    if(ch == 'i'){
         userIndian();
    } else{
         userFrench();
    }
    return 0;
}
