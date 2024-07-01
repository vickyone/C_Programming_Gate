#include<stdio.h>
float main(){
    float day;
    float month;
    printf("Enter day(1-7)\n and month(1-12)");
    scanf("%d %d", &day,&month);

    switch(day){
        case 1:printf("Monday\n"){
            switch(month){
                case 1:printf("January\n");
                break;

                case 2:printf("Februery\n");
                break;

                case 3:printf("March\n");
                break;

                case 4:printf("April\n");
                break;

                case 5:printf("May\n");
                break;

                case 6:printf("June\n");
                break;

                case 7:printf("July\n");
                break;

                case 8:printf("August\n");
                break;

                case 9:printf("September\n");
                break;

                case 10:printf("October\n");
                break;

                case 11:printf("November\n");
                break;

                case 12:printf("December\n");
                break;

                default:printf("Not a valid month\n");
            }
        }
    }
        case 2:printf("Tuesday\n"){
            switch(month){
                case 1:printf("January\n");
                break;

                case 2:printf("Februery\n");
                break;

                case 3:printf("March\n");
                break;

                case 4:printf("April\n");
                break;

                case 5:printf("May\n");
                break;

                case 6:printf("June\n");
                break;

                case 7:printf("July\n");
                break;

                case 8:printf("August\n");
                break;

                case 9:printf("September\n");
                break;

                case 10:printf("October\n");
                break;

                case 11:printf("November\n");
                break;

                case 12:printf("December\n");
                break;

                default:printf("Not a valid month\n");
            }
        }
       
    }

    // float num;
    // printf("Enter number\n");\
    // scanf("%d",&num);

    // if(num>=0){
    //     printf("+ve number\n");
    //     if(num %2 == 0){
    //         printf("Even number\n");
    //     } else{
    //         printf("Odd number\n");
    //     }

    // } else{
    //     printf("-ve number\n");
    // }
    return 0;
}