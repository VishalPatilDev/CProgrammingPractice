#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter string : ");
    scanf("%s",str);
    int res = strchr(str,'a');
    printf("%s",res);
}

// #include<stdio.h>
// void main(){
//     char str[100];
//     printf("Enter string : ");
//     scanf("%s",str);
//     char ch;
//     printf("Enter character : ");
//     scanf(" %c",ch);
//     char* res = str_chr(str,ch);
// }

