#include<stdio.h>
float main(){
    float marks;
    printf("Enter marks :\n");
    scanf("%f",&marks);
    
    if(marks>90 && marks<=100){
        printf("You performed very well\n");
    }

    else if(marks>80 && marks<=90){
        printf("You got very good marks\n");
    }

    else if(marks>70 && marks<=80){
        printf("You got good marks\n");
    }

    else if(marks>60 && marks<=70){
        printf("You got poor marks\n");
    }
    else if(marks>50 && marks<=60){
        printf("You got worst mark\n");
    }
    else{
        printf("You faild ,improve next time\n");
    }

    //Conditional operater(Ternery Operator)
    float age;
    printf("Enter age of voter\n");
    scanf("%d",&age);
    (age>17)?printf("Eligible for voting"):printf("not eligible for voting");
    return 0;
}