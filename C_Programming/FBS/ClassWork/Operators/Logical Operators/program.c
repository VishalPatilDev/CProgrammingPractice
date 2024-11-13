#include<stdio.h>
void main(){
    //1
    int c = 10 && -20;
    printf("%d",c); // Any number other than zero is considered as 1(true) in c.
    printf("\n");

    //2
    int a = printf("hello") || printf("fbs");
    printf("%d",a);
    printf("\n");

    //3
    int b = 10 + printf("xyz")>57<printf("hi")&& 49 +printf("hello")|| 37 + printf("fbs");
    printf("%d",b);
    printf("\n");

    //4
    int d = printf("hello")&& 0 || printf("")&&0||printf("fbs")&&0+1>50;
    printf("%d",d);
    printf("\n");

    //5
    int var1 = 10;
    int var2 = 0;
    int res = printf("%d is result of %d",var1,var2);
    printf("%d",res);




}