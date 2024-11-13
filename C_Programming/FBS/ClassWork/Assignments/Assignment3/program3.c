#include<stdio.h>
void main(){
    int start,end;
    printf("Enter Starting Number : ");
    scanf("%d",&start);
    printf("Enter Ending Number : ");
    scanf("%d",&end);
    int i=start;
    int sum=0;
    while(i<=end){
        sum = sum+i;
        i++;
    }
    printf("Sum = %d",sum);
}