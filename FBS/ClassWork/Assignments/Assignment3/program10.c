#include<stdio.h>
void main(){
    int num,rem;
    printf("Enter a number :");
    scanf("%d",&num);
    int lastDigit = num%10,firstDigit;
    while(num>=10){
        num/=10;
    }
    firstDigit = num;
    printf("Addition of first and last digit is : %d",firstDigit+lastDigit);
}