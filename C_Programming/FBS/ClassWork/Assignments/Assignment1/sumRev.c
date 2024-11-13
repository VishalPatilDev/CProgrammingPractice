#include<stdio.h>
void main(){
    int num  = 123;
    if(num >99 && num<1000){
        
        int sum =0,rev=0;
        int var = num%10;
        sum = sum+var;
        rev=(rev*10)+var;

        num = num/10;
        var = num%10;
        sum = sum+var;
        rev= (rev*10)+var;

        num = num/10;
        var = num%10;
        sum = sum +var;
        rev = (rev*10)+var;
        printf("The sum of numbers is : %d\n",sum);
        printf("The reverse of the number is : %d",rev);
        

    }
    else{
        printf("Wrong Inpurt");
    }
}