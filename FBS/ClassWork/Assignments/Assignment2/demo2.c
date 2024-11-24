#include<stdio.h>
void main()
{
    int num = 25;
    // if(num%2==0 ){
    //     printf("Number is even\n");
    //     if(num%5==0){
    //     printf("Number is divisible by 5");
    //     }
    // }
    // else if (num%2!=0){
    //     printf("Number is odd");
    //     if(num%5==0){
    //         printf("Number is divisible by 5");
    //     }
    // }
    (num%2==0)?(num%5==0)?printf("number is even and divisible by 5"):printf("number is even"):(num%5==0)?printf("number is odd and divisible by 5"):printf("number is odd");
}