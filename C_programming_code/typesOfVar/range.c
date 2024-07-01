#include<stdio.h>

int main(){

    printf("The range check is %d\n",8589934592);//result is zero because LSB is taken as output
                                                //It is not garbage value
    // Decimal value of 8589934592 is 10 00000000 00000000 00000000 00000000
    printf("The range check is %d\n",8589934593);
    printf("The range check is %d\n",8589934594);
    printf("The range check is %d\n",8589934595);
    printf("The range check is %d\n",8589934596);

    unsigned long x=1234ul;
    printf("%ul\n",x);

    char char1 = 'A';

    int num  = (int) char1;
    printf("%d",num);

}