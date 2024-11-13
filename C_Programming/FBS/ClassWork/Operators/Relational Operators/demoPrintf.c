#include<stdio.h>
void main(){
    //1
    int x = printf("Hello");
    printf("%d",x);
    printf("\n");

    //2
    int y = printf("hello") || printf("fbs");
    printf("%d",y);
    printf("\n");

    //3
    int z = printf("abc")<printf("pqrs")>printf("abcxyz");  //3<4>6
    printf("%d",z);
    printf("\n");

    //4
    int a = 1234;
    int v = printf("%d is a value ",a);
    printf("%d",v); //it will print the number of characters present in printf
    printf("\n");

    //5
    int co =printf("%d",printf("hello")); //hello5
    printf("%d",co); //hello - 5 - 1
}

