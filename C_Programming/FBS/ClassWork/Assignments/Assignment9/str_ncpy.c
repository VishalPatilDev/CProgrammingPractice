// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str[10],str2[6];
//     printf("Enter first string : ");
//     scanf("%s",str);
//     strncpy(str2,str,sizeof(str2));
//     str2[sizeof(str2)-1]='\0';
//     printf("%s",str2);
// }

#include<stdio.h>
#include<string.h>
char* mystrncpy(char*,char*,int);
void main(){
    char str1[10]="firstbit";
    char str2[10];
    int n;
    printf("Enter num : ");
    scanf("%d",&n);
    mystrncpy(str2,str1,n);
    printf("%s",str2);
}
char* mystrncpy(char* str2,char*str1,int n){
    int i=0;
    while(str1[i]!='\0'){
        if(i==n){
            break;
        }
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    return str2;
}








