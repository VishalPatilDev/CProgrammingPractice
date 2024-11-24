#include<stdio.h>
void main(){
    int num = 12345678;
    int var,sum=0,rev=0;
    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;

    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;
    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;
    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;
    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;
    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;
    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;
    var = num%10;
    sum = sum+var;
    rev = (rev*10)+var;
    num = num/10;
    printf("%d\n",sum);
    printf("%d\n",rev);
    printf("%d",sizeof(int));



}