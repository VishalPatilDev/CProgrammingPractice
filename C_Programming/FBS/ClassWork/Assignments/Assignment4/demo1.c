#include<stdio.h>
void main(){
    int n=5,sum=0,fact=1;
    for(int i = 1;i<=n;i++){
        fact=1;
        for(int j=i;j<=i;j++){
            fact*=j;
        }
        sum +=fact;
    }
    printf("Sum upto %d factorial is : %d",n,sum);
}