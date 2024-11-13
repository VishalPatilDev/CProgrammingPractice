#include<stdio.h>
void main(){
    
    int arr[5];
    printf("Enter :");
    int i;

    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }

}