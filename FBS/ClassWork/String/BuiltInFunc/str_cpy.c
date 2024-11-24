// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str[100],str2[100];
//     printf("Enter first string : ");
//     scanf("%s",str);
//     strcpy(str2,str);
//     printf("%s",str2);
// }

#include<stdio.h>
char* str_cpy(char*,char*);
void main(){
    char str1[]="hello";
    char str2[10];
    str_cpy(str2,str1);
    printf("%s",str2);

}
char* str_cpy(char* str2,char* str1){
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    return str2;
}

