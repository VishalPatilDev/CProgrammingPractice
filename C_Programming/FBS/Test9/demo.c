#include<stdio.h>
#include<string.h>

void main(){
    char str[]="programming";
    char result[50];
    int index=0;
    int flag=0;
    for(int i=0;i<strlen(str)+1;i++){
        int j;
        for(j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]){
                flag=1;
                continue;
            }
        }
        if(!flag){
            result[index++]=str[i];
        }
        
    }
    printf("%s",result);
}