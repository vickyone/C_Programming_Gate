#include<stdio.h>

//calculate percent of a student

float percent(float maths, float science, float socialScience, float english, float hindi){

    float percentage;
    float total = 500; 
    return percentage = (maths + science + socialScience + english + hindi)/total *100; 
}

void grade(float maths, float science, float socialScience, float english, float hindi){
    float percent1 = percent(maths, science, socialScience,english,hindi);
    if(percent1>90 && percent1<=100){
        printf("Outstanding\n");
    } else if(percent1 >80 && percent1 <=90){
        printf("Good\n");
    } else{
        printf("Not good\n");
    }
}

float main(){
    float maths,science,socialScience,english,hindi;
    printf("Enter marks     :\t\n");
    scanf("%f %f %f %f %f",&maths, &science, &socialScience, &english, &hindi);
    printf("The percentage :\t%f\n  Grade :\t",percent(maths,science,socialScience,english,hindi),
     grade(maths,science,socialScience,english,hindi));
    
}