#include<stdio.h>
#include<string.h>

void swapFirstAndLast(char* str){
    char temp = str[0];
    str[0]=str[strlen(str)-1];
    str[strlen(str)-1]=temp;
}

void main(){
    char str[10];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    swapFirstAndLast(str);
    printf("String after swapping : %s",str);
}