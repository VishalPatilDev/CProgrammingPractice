#include<stdio.h>
void main(){
    int num,temp,rem,rev=0;
    
    printf("Enter a number :");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem = num%10;
        rev = (rev*10)+rem;
        num/=10;
    }
    if(temp==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
}