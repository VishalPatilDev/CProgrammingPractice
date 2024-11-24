#include<stdio.h>
#include<stdlib.h>
void store();
void main(){
    // int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int* arr = (int*)malloc(size * sizeof(int));
    printf("Enter elements in array : ");
    store(arr,size);
    display(arr,size);
}
void store(int* arr,int size){
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int* ptr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",ptr[i]);
    }
    
}