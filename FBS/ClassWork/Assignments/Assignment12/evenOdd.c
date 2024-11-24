#include<stdio.h>
#include<stdlib.h>
void evenOdd(int* ,int);
void main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int* arr=(int*)malloc(size*sizeof(int));
    
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    evenOdd(arr,size);
}
void evenOdd(int* arr,int size){
    printf("Even nos in array : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd nos in array : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d \n",arr[i]);
        }
    }
}