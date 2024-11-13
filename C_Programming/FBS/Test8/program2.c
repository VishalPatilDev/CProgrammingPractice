#include<stdio.h>
void mystrrev(char*);
void main(){
    char str[]="vishalpatil";
    mystrrev(str);
    printf("Reversed string is : %s",str);
}
void mystrrev(char* str){
    char temp;
    int start=0;
    int end=0;
    while(str[end]!='\0'){
        end++;
    }
    end--;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}