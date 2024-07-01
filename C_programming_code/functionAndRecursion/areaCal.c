#include<stdio.h>

float areaCircle(float r){
    return 3.14*r*r;
}
float areaSqure(float side){
    return side*side;
}
float areaRect(float length,float breadth){
    return length*breadth;
}

float main(){
    printf("Enter radius :\t");
    float r;
    scanf("%f",&r);
    printf("Area of circle is :\t %f\n", areaCircle(r));


    printf("Enter side :\t");
    float side;
    scanf("%f",&side);
    printf("Area of square is :\t%f\n",areaSqure(side));


    float length,breadth;
    printf("Enter side :\t");
    scanf("%f\t%f",&length,&breadth);
    printf("Area of rectangle is :\t %f\n",areaRect(length,breadth));

    return 0;

}