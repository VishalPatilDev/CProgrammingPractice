//Change a charater in a string
#include<stdio.h>
void main(){
    char str[10];
    printf("Enter string :");
    scanf("%s",str);
    // printf("Your entered string is : %s",str);
    char ch1,ch2;
    printf("Enter char you want to change:");
    // fflush(stdin);
    scanf(" %c",&ch1);
    printf("enter char to replace :");
    // fflush(stdin);
    scanf(" %c",&ch2);


    int i=0,flag=0;
    char str2[10];
    while(str[i] != '\0'){
        if(str[i]==ch1){
            flag=1;
            str[i]=ch2;
            printf("Your changed string is : %s",str);
            break;
        }
        i++;
    }
    
    
    
}