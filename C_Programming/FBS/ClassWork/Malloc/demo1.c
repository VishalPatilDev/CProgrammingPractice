#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char str[10]="firstbit";
    char* ptr = strdup(str);
    printf("%s",ptr);
}
char* strdup(char* ptr){
    int len=strlen(ptr)+1;
    char *dup = (char*)malloc(sizeof(char)*len);
    for(int i=0;i<len;i++){
        dup[i]=ptr[i];
    }
    return dup;
}