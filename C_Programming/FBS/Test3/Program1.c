#include<stdio.h>
void main(){
    int startNum,endNum;
    printf("Enter starting and ending number :");
    scanf("%d %d",&startNum,&endNum);
    printf("Even : ");
    for(int i=startNum;i<=endNum;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    printf("Odd : ");
    for(int i=startNum;i<=endNum;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
}