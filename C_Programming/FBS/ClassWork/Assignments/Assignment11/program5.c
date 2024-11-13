#include<stdio.h>
void main(){
    char str[10];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    int res = countVowels(str);
    printf("Number of vowels in given string : %d",res);
}
int countVowels(char* str){
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'||str[i]=='I'){
            count++;
        }
        i++;
        
    }
    return count;
}