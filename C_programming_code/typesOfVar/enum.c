#include<stdio.h>

//method 1
// enum weekdays{  Mon=1.5,
//                 Tue=105,
//                 Wed,//106     //Value auto incremented from previous one
//                 Thu,//107
//                 Fri,//108
//                 Sat = 105,// values can be same for different enum names
//                 Sun = 106};

// int main(){
//     enum weekdays w;
//     w = 1.5;
//     printf("The value of w is %d",w);
//     return 0;
// }

//method2

enum {  Mon=1,
                Tue=105,
                Wed,//106     //Value auto incremented from previous one
                Thu,//107
                Fri,//108
                Sat = 105,// values can be same for different enum names
                Sun = 106
} w;

int main(){
    enum  w;
    w = Fri; //assigning value of Fri to w
    printf("The value of w is %d",w);
    return 0;
}
