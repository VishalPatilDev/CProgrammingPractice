#include<stdio.h>
void main(){
    char str[10];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    int start=0;
    int end=0;
    while(str[end]!='\0'){
        end++;
    }
    end--;
    if (str[end] == '\n') { //otherwise str[start] will compare with \n
        end--;
    }

    int isPallin=1;
    while(start<end){
        if(str[start]!=str[end]){
            isPallin=0;
            break;
        }
        start++;
        end--;
    }
    if(isPallin){
        printf("pallindrome");
    }
    else{
        printf("Not a pallindrome string");
    }
    
}