#include<stdio.h>

float priceCalculator(float price){
    return (price + (price*18)/100);
}

float main(){
    printf("Enter any price\n");
    float price;
    scanf("%f",&price);
    price = priceCalculator(price);//argument
    printf("Price of the item  :\n%f",price);

}