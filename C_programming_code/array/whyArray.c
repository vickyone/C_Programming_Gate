#include<stdio.h>

// Using multiple times variable of similar data types

// float percent(float marks1,float marks2,float marks3){
//     int percent = (marks1+marks2+marks3)/300*100;
//     return percent;
// }

// float main(){
//     float marks1,marks2,marks3;
//     printf("Enter marks:\t");
//     scanf("%f %f %f",&marks1,&marks2,&marks3);
//     printf("The percentage : %f %",percent(marks1,marks2,marks3));
// }

//reason to use array

float percentage(float marks[45,76,97]){
    percentage1 = (marks[0] +marks[1] +marks[2])/300*100;
}

float main(){   
    float marks[] = {45,76,97};
    printf("The pecentage = %f",percentage(marks[45,76,97]));
}