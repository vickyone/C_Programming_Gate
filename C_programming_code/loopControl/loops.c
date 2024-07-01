#include<stdio.h>
float main(){
    // for(float i=0 ;i<11 ;++i){
    //     printf("%d\t\n",i);
        
    // }
    // float i = 1;
    // printf("%d\n",i++);
    // return 0;
    // char ch = 'a';
    // while(ch <='z'){
    //     printf("Characters are :%c\n",ch);
    //     ++ch;
    // }




    //print the number from 0 to n if n given by user
    // float num;
    // printf("Enter number :\n");
    // scanf("%d",&num);
    // float i=0;
    // while(i<num+1){
    //     printf("%d\n",i);
    //     i++;
    // }




    //do-while-loop
    //Print charaters from a to z
    // char ch = 'a';
    // do{
    //     printf("The characters are :%c\n",ch);
    //     ch++;
    // }
    // while(ch <='z');





    //Sum of n natural numbers

    // float num,sum=0;
    // printf("Enter number :\n");
    // scanf("%d",&num);

    // for(float i=1; i<=num; i++){
    //     sum = sum + i;
    // }
    // printf("The sum :%d\n",sum);

    // for(float i=num ; i>=1 ; i--){
    //     printf("%d\n",i);
    // }


    //Same solution of above with single loop

    // float num,sum=0;
    // printf("Enter number :\t");
    // scanf("%d",&num);
    // for(float i=1,j=num ;i<=num && j>=1 ;i++,j--){//here AND operater is not neccessary
    //     sum = sum +i;
    //     printf("%d\n",j);
    // }
    // printf("The sum :%d\n",sum);



    //keep taking numbers from user until odd number entered

    float num;
    do{
        scanf("%d",&num);
        printf("%d\n",num);
        if(num %2!=0){
            break;
        }
    }
    while(1);


    return 0;
}