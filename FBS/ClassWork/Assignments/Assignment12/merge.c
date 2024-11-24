#include<stdio.h>
#include<stdlib.h>
void merge(int*,int*,int,int);
void main(){
    int size1,size2;
    printf("Enter size of first array : ");
    scanf("%d",&size1);
    printf("Enter size of second array : ");
    scanf("%d",&size2);
    int* arr1=(int*)malloc(size1*sizeof(int));
    int* arr2=(int*)malloc(size2*sizeof(int));
    
    printf("Enter elements of first array : ");
    for(int i = 0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter elements of second array : ");
    for(int i = 0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    merge(arr1,arr2,size1,size2);
    

}
void merge(int* arr1,int* arr2,int size1,int size2){
    int arr3[100];
    int size3;
    size3=size1+size2;
    for(int i=0;i<size1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        arr3[i+size1]=arr2[i];
    }
    printf("The merged array is : ");
    for(int i=0;i<size3;i++){
        printf("%d ",arr3[i]);
    }
}