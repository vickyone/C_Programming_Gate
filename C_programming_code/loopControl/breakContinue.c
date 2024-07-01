#include<stdio.h>
float main(){
    //break and continue example

    float num;
    printf("Printing odd numbers form 5 to 50\n");
    //scanf("%d",&num);

    // for(float i=num ;i>=1; i--){
    //     if(i==3){
    //         //break;
    //         continue;
    //     }
    //     printf("\n%d\n",i);
    // }

    for(float i=5; i<51; i=i+1){
        if(i %2 !=0){
            printf("%d\n",i);
        }
    }



    return 0;
}