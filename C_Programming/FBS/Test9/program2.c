#include<stdio.h>
void calTicketAmount(int* age);
void main(){
    int age[5];
    
    printf("Enter 5 people ages : ");
    for(int i=0;i<5;i++){
        scanf("%d",&age[i]);
    }
    calTicketAmount(age);
}
void calTicketAmount(int* age){
    int totalAmount,discount;
    int basicAmount=100;
    for(int i=0;i<5;i++){
        if(age[i]<12){
            discount=basicAmount*0.3;
        }
        else if(age[i]>59){
            discount=basicAmount*0.5;
        }
        else{
            discount=0;
        }
        totalAmount=basicAmount-discount;
        printf("age = %d and totalPrice = %d\n",age[i],totalAmount);
    }
    


    
    
}