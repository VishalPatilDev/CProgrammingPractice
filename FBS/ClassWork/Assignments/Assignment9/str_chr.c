#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter string : ");
    scanf("%s",str);
    int res = strchr(str,'a');
    printf("%s",res);
}