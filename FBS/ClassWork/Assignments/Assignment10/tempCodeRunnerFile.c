#include<stdio.h>
#include<string.h>
void main(){
    char str[100],str2[100];
    printf("Enter string : ");
    scanf("%s",str);
    printf("Enter string2 : ");
    scanf("%s",str2);
    // int res=strcmp(str,str2);
    int res = strncmp(str,str2,4);
    // int res=strcasecmp(str,str2);
    printf("%d\n",res);
    if(res==0){
        printf("Both strings are equal");
    }
    else if(res>0){
        printf("First String is greater than second string");
    }
    else{
        printf("Second string is greater");
    }
}