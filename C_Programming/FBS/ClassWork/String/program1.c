#include<stdio.h>
#include<string.h>
void main(){
    char str[10];
    printf("Enter string :");
    scanf("%s",&str);
    for(int i=0;i<10;i++){
        if(str[i]=='\0'){
            printf("Hello");
            break;
        }
        else{
            printf("%c",str[i]);
        }
    }
    // char str[]={'a','b','c','d'};
    // // char str1[7]={"vishal"};
    // int i=0;
    // while(str[i]!='\0'){
    //     printf("%c",str[i]);
    //     printf("%d",i);
    //     i++;
        
    // }
    
    // printf("\n%d",strlen(str));

    // // printf("%s",str1);
}