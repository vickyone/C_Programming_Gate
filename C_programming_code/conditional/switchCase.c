#include<stdio.h>
float main(){
    // float day;
    // printf("Enter day(1-7)\n");
    // scanf("%d",&day);

    // switch(day){
    //     case 1:printf("Monday\t");
    //     break;

    //     case 2:printf("Tuesday\t");
    //     break;

    //     case 3:printf("Wednesday\t");
    //     break;

    //     case 4:printf("Thursday\t");
    //     break;

    //     case 5:printf("Friday\t");
    //     break;

    //     case 6:printf("Saturday\t");
    //     break;

    //     default:printf("Sunday\t");
    //     return 0;

              
    // }

    char day;
    printf("Enter day first letter\n");
    scanf("%c",&day);

    switch(day){
        case 'm':printf("Monday\t");
        break;

        case 't':printf("Tuesday\t");
        break;

        case 'w':printf("Wednesday\t");
        break;

        case 'T':printf("Thursday\t");
        break;

        case 'f':printf("Friday\t");
        break;

        case 's':printf("Saturday\t");
        break;

        case'S':printf("Sunday\t");
        break;

        default:printf("Not a valid day\n");
        return 0;

              
    }
}