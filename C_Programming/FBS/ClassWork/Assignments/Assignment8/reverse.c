#include<stdio.h>
void reverse(int*,int);
void main(){
    int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
}
void reverse(int* arr,int size){
    printf("Reversed array is : ");
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}