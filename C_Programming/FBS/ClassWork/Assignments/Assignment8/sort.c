#include<stdio.h>
void sort(int*,int);
void main(){
    int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,size);
}
void sort (int* ptr,int size){
    int temp=ptr[0];
    // printf("Sorted array is : ");
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(ptr[i]>ptr[j]){
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
        printf("%d ",ptr[i]);
    }
}