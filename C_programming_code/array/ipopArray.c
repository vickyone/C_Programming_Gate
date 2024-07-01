#include<stdio.h>
//  void display(){
//     printf("Enter array elements\n");
//     scanf("%d %d %d",&num[0],&num[1],&num[2]);
//     printf("Elements are: %d\t %d\t %d\t",num[0],num[1],num[2]); 
    
// }
// int main(){
//     int num[] = {};
//     display();
    

// }

int main(){
    int marks[4];
    printf("Enter marks of Computer Science\t");
    scanf("%d",marks[0]);

    printf("Enter marks of Data Structures\t");
    scanf("%d",marks[1]);

    printf("Enter marks of Algorithms\t");
    scanf("%d",marks[2]);

    printf("Enter marks of OS\t");
    scanf("%d",marks[3]);

    printf("The marks in differnt subs are %d\t%d\t%d\t%d",marks[0],marks[1],marks[2],marks[3]);
}