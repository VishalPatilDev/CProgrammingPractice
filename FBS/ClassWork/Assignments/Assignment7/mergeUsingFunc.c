#include<stdio.h>
void main(){
    int arr1[100],arr2[100],size1,size2;
    printf("Enter size of first array :");
    scanf("%d",&size1);
    printf("Enter size of second array :");
    scanf("%d",&size2);
    
    mergeArrays(arr1,arr2,size1,size2);
    
}
void mergeArrays(int* arr1,int* arr2,int size1,int size2){
    int merge[100],size3;
    size3=size1+size2;
    printf("Enter first array elements : ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array elements : ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i =0;i<size1;i++){
        merge[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        merge[i+size1]=arr2[i];
    }
    printf("Merged array = ");
    for(int i=0;i<size3;i++){
        printf("%d ",merge[i]);
    }
}