#include<stdio.h>
char* mystrlwr(char*);
void main(){
    char str[]="VISHALPatil";
    char* str2=mystrlwr(str);
    printf("%s",str2);
}
char* mystrlwr(char* str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z'){
            // str[i]=str[i]+('a'-'A');
            str[i]=str[i]+32;
        }
        i++;
    }
    return str;
}