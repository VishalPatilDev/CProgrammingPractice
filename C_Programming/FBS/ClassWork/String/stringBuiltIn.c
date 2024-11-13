#include<stdio.h>
#include<string.h>
void main(){
    char str[10],str2[10];
    printf("Enter string : ");
    scanf("%s",str);
    printf("The length of the given string is : %d\n",strlen(str));
    
    
    strcpy(str2,str);
    printf("string is copied : %s",str2);

    printf("Enter second string : ");
    scanf("%s",str2);
    strcat(str,str2);
    printf("%s",str2);

}