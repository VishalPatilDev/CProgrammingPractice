// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str[100],str2[100];
//     printf("Enter string : ");
//     scanf("%s",str);
//     printf("Enter string2 : ");
//     scanf("%s",str2);
//     // int res=strcmp(str,str2);   //Compares two strings upto null character found
//     // int res = strncmp(str,str2,4); //Compares upto 4 characters
//     int res=strcasecmp(str,str2); //Compares two strings ignoring cases upper or lower
//     printf("%d\n",res);
//     if(res==0){
//         printf("Both strings are equal");
//     }
//     else if(res>0){
//         printf("First String is greater than second string");
//     }
//     else{
//         printf("Second string is greater");
//     }
// }


#include<stdio.h>
int str_cmp(char* ,char*);
void main(){
    char str1[100],str2[100];
    printf("Enter first string : ");
    scanf("%s",str1);
    printf("Enter second string : ");
    scanf("%s",str2);
    int res = str_cmp(str1,str2);
    if(res>0){
        printf("String 1 is greater");
    }
    else if (res==0){
        printf("Strings are equal");
    }
    else if(res<0){
        printf("String 2 is greater");
    }
}

int str_cmp(char* str1,char* str2){
    int i=0,res=0;
    int len1 = strlen(str1);
    int len2=strlen(str2);
    if(len1==len2){
        while(str1[i] !='\0' || str2[i] !='\0'){
        if(str1[i]==str2[i]){
            res=0;
        }
        else if(str1[i]<str2[i]){
            res=-1;
        }
        else if (str1[i]>str2[i]){
            res=1;
        }
        i++;
    }

    }
    else if(len1<len2){
        res = -1;
    }
    else if(len1>len2){
        res = 1;
    }
    return res;
}