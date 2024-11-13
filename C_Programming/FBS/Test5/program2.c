#include<stdio.h>
void balance(int);
void main(){
    int amount;
    printf("Enter amount in your account :\n");
    scanf("%d",&amount);
    balance(amount);
}
void balance(int amt){
    char choice;
    printf("Enter choice :");
    fflush(stdin);
    scanf("%c",&choice);
    int deposit,withdraw;
    
    int updatedAmount;
    if(choice=='d'){
        printf("Enter deposit :");
    scanf("%d",&deposit);
        printf("Updated amount is : ",amt+deposit);
    }
    else if (choice =='w'){
        printf("Enter withdrawal ammount :");
    scanf("%d",&withdraw);
        printf("Updated amount is :%d ",amt-withdraw);
    }
    else if(amt<3000){
        printf("Can't withdraw the amount balance is not sufficient");
    }
    
}