#include<stdio.h>
#include<string.h>
int search(char*,char);
void main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    char ch;
    printf("Enter character you want to search : ");
    scanf(" %c",&ch);
    int i=0,flag=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("character found at index : %d",i);
    }
    
}
