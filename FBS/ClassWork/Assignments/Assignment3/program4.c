#include<stdio.h>
void main(){
    int num,prime=0;
    printf("Enter any number :");
    scanf("%d",&num);
    int i=2;
    while(i<num/2){
        if(num%i==0){
            prime++;
            break;
        }
        i++;
    }
    if(prime==0){
        printf("This number is prime");
    }
    else{
        printf("This number is not prime");
    }
}