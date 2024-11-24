#include<stdio.h>
void calSp(int cp);
void main(){
    int cp;
    printf("Enter cost price :");
    scanf("%d",&cp);
    // int discount;
    // printf("Enter discount : ");
    // scanf("%d",&discount);
    calSp(cp);
}
void calSp(int cp){
    int pad,discount;
    if(cp>=10000){
        discount=50;
        pad=cp-(cp*discount/100);
        printf("price after discount : %d ",pad);
    }
    else if(cp>=5000 && cp<10000){
        discount=25;
        pad=cp-(cp*discount/100);
        printf("price after discount : %d ",pad);
    }
    else if(cp>=1000 && cp<5000){
        discount=15;
        pad=cp-(cp*discount/100);
        printf("price after discount : %d ",pad);

    }
    else{
        printf("No discount ");
    }
    
}