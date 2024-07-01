#include<stdio.h>
int main(){
    char str[] = "Hello World!";
    printf("% 20s\n",str);
    printf("% -20s\n",str);
    printf("% 20.4s\n",str);
    printf("% -20.5s\n",str);

    return 0;
}