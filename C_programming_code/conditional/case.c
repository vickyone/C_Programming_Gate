#include<stdio.h>
float main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);

    //if(ch >= 97 && ch <= )
    if(ch >= 'A' && ch <= 'Z'){
        printf("Entered Letter is in Uppercase\n");
    } else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase\n");
    } else{
        printf("Any other character entered\n");
    }
    return 0;

}