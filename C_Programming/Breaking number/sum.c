#include<stdio.h>
void main(){
    int num = 123;
int var,sum=0;
var = num % 10;
sum = sum + var;
num = num/10;
var = num%10;
sum = sum+var;
num =num/10;
var = num%10;
sum = sum +var;
printf("%d",sum);
}

