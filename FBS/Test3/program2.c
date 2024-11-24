#include<stdio.h>
void main(){
    int startNum,endNum,sum=0;
    printf("Enter starting and ending number :");
    scanf("%d %d",&startNum,&endNum);
    for(int i =startNum+1;i<endNum;i++){
        sum=sum+i;
    }
    printf("Sum = %d",sum);
}