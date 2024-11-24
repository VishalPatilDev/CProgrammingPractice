#include<stdio.h>
void main(){
    int num = 153,temp=num,sum=0,rem;
    while(num>0){
        rem = num%10;
        sum = sum + rem;
        num=num/10;

    }
    if(temp==sum){
        printf("The number is armstrong");
    }
    else{
        printf("The number is not armstrong");
    }
}