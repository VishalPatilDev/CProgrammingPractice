#include<stdio.h>
#define MAX_SIZE 10
void main(){
    int arr[MAX_SIZE];
    int xPos,yPos,size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter xth position : ");
    scanf("%d",&xPos);
    printf("Enter yth position : ");
    scanf("%d",&yPos);
    store(arr,size);
    display(arr,size,xPos,yPos);
}
void store(int* arr,int size){
    printf("Enter elements in array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int* arr,int size,int xPos,int yPos){
    int temp=arr[0];
    for(int i=0;i<size;i++){
            if(i==xPos){
                temp=arr[xPos];
                arr[i]=arr[yPos];
                arr[yPos]=temp;
            }
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}