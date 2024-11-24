#include<stdio.h>
void main(){
    int a=100,b=200,c=30;
    // if(a>b&&a>c){
    //     printf("a is greater");
    // }
    // else if (b>c){
    //     printf("b is greater");
    // }
    // else{
    //     printf("c is greater");
    // }
    if(a>b){
        if(a>c){
            printf("A is greater ");
        }
        else{
            if(c>b){
                printf("C is greater ");
            }
        }
    }
    else if(b>c){
        printf("B is greater");
    }
    else{
        printf("C is greater");
    }
}