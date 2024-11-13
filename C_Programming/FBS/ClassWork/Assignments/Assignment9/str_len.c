// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str[100];
//     printf("Enter string : ");
//     scanf("%s",&str);
//     printf("The length of the given string is : %d",strlen(str));
// }


#include<stdio.h>
int str_len(char*);
void main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    int count =str_len(str);
    printf("The length of the given string is : %d",count);
}
int str_len(char* str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;

}