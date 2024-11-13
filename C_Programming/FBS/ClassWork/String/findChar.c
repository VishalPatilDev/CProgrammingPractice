//Find index of character
#include<stdio.h>
void main(){
    char str[10];
    printf("Enter string :");
    scanf("%s",str);
    // printf("Your entered string is : %s",str);
    char ch;
    printf("Enter char :");
    // fflush(stdin);
    scanf(" %c",&ch);

    int i=0,count=0,flag=0;
    while(str[i] != '\0'){
        if(str[i]==ch){
            // count++;
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("Character found at index : %d",i);
    }
    else{
        printf("Character not found");
    }
    // printf("%d",i);
    // printf("\ncount of character = %d",count);
}