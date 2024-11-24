#include<stdio.h>
void main(){
    int priceBeforeDiscount=15000;
    int priceAfterDiscount;
    int discount;
    if(priceBeforeDiscount>=10000){
        // discount = 15/100*100;
        discount=15;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
    else if(priceBeforeDiscount>=7000 && priceBeforeDiscount<10000){
        discount = 10;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
    else if(priceBeforeDiscount>=5000 && priceBeforeDiscount<7000){
        discount = 5;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
    else{
        discount= 0;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
}