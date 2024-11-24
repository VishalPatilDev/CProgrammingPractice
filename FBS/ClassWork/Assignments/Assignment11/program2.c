#include<stdio.h>
void main(){
    char str[100];
    printf("Enter string : ");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'){
            str[i]='$';
        }
        i++;
    }
    printf("Updated string is : %s",str);
}