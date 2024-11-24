//Perfect Number
#include<stdio.h>
void main(){
    int startNum,endNum;
    printf("Enter Starting Number :");
    scanf("%d",&startNum);
    printf("\nEnter End Number :");
    scanf("%d",&endNum);
    for(int i=startNum;i<=endNum;i++){
        int num=i;
        int j=1,sum=0;
        while(j<num){
            if(num%j==0){
                sum=sum+j;
            }
            j++;
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
}