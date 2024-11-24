#include<stdio.h>
void search(int*,int);
void main(){
    int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    search(arr,size);
}

void search(int* arr,int size){
    int num;
    printf("\nEnter the element you want to search : ");
    scanf("%d",&num);
    int found=0;
    int i;
    for(i=0;i<=size;i++){
        if(num==arr[i]){
            found=1;
            break;
        }
    }
    if(found){
        printf("Element found at index : %d\n",i);
    }
    else{
        printf("Element not found");
    }
}