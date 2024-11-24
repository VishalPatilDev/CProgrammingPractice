#include<stdio.h>
#include<string.h>

void main(){
    char str[100]="I love cricket";
    int i=0,res=0,count=0;
    
    while(str[i]!=NULL){
        if(str[i] != ' '){
            count++;
        }
        else{
            if(res<count){
                res=count;
            }
            count=0;
        }
        i++;
    }
    if(res<count){
        res=count;
    }
    printf("%d",res);
}