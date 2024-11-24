#include<stdio.h>
void main(){
    int num,i=1,fact=1,rem,temp,sum=0;
    temp=num;
    printf("Enter a number :");
    scanf("%d",&num);
    while(num>0){
        rem = num%10;
        while(i<=num){
        fact = fact*i;
        i++;
    }
    num/=10;
    sum=sum+fact;
    }
    if(temp==sum){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    
}