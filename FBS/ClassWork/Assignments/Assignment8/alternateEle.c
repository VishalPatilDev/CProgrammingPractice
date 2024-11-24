#include<stdio.h>
void alternateEle(int*,int);
void main(){
    int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    alternateEle(arr,size);
    
}
void alternateEle(int* arr,int size){
    printf("Printing alternate elements in array : ");
    for(int i=0;i<size;i=i+2){
        printf("%d ",arr[i]);
    }
}