//Optimized
#include<stdio.h>
void main(){
    int num = 123;
int var,sum=0,rev = 0;
var = num % 10;
sum = sum + var;
rev = (rev*10)+var;
num = num/10;
var = num%10;
sum = sum+var;
rev = (rev*10)+var;
num =num/10;
var = num%10;
sum = sum +var;
rev = (rev*10)+var;
printf("%d\n",sum);
printf("%d",rev);

}




// #include<stdio.h>
// void main(){
//     int num = 321;
//     int var1,var2,var3,sum,rev;
//     var1 = num%10;
//     num = num/10;
//     var2 = num %10;
//     num = num/10;
//     var3 = num %10;
//     sum = var1+var2+var3;
//     rev = (var1*100)+(var2*10)+(var3*1);
//     printf("%d\n",sum);
//     printf("%d",rev);
// }