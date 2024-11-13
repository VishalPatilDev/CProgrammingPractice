#include<stdio.h>
void main(){
    int num=6,i=1,sum=0;
    while(i<num){
        if(num%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(num==sum){
        printf("Number is Perfect number");
    }
    else{
        printf("Number is not perfect");
    }
}