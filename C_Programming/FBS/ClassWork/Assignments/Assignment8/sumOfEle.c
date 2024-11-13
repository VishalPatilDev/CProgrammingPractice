#include<stdio.h>
void sumofEle(int*,int);
void main(){
    int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    sumOfEle(arr,size);
}
void sumOfEle(int* arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("Sum of array = %d",sum);
}