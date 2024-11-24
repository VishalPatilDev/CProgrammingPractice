// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str[10],str2[10];
//     printf("Enter string : ");
//     scanf("%s",str);
//     printf("Enter second string : ");
//     scanf("%s",str2);
//     strcat(str,str2);
//     printf("The concatinated string is : %s",str2);
// }


#include<stdio.h>
#include<string.h>
void str_cat(char*,char*);
void main(){
    char str[100],str2[100];
    printf("Enter string : ");
    scanf("%s",str);
    printf("Enter second string : ");
    scanf("%s",str2);
    str_cat(str,str2);
}
void str_cat(char* str,char* str2){
    int i=0;
    char str3[100];
    while(str[i]!='\0'){
        str3[i]=str[i];
        i++;
    }
    i=0;
    while(str2[i]!='\0'){
        str3[i+strlen(str)]=str2[i];
        i++;
    }
    str3[i+strlen(str)]='\0';
    printf("%s",str3);
}




