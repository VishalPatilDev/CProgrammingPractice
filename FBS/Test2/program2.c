#include<stdio.h>
void main(){
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num>0){
        printf("%d is a positive number",num);
    }
    else if(num<0){
        printf("%d is a negative number",num);
    }
    else{
        printf("%d is a neutral");
    }
}