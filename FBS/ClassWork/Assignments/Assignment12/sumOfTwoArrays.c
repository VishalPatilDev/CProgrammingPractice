#include<stdio.h>
#include<stdlib.h>
void sumOfTwoArrays(int*,int*,int,int);
void main(){
    int size1;
    printf("Enter size of array1 : ");
    scanf("%d",&size1);
    int size2;
    printf("Enter size of array2 : ");
    scanf("%d",&size2);
    int* arr1=(int*)malloc(size1*sizeof(int));
    int* arr2=(int*)malloc(size2*sizeof(int));
    printf("Enter elements in array1 : ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter elements in array2 : ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    sumOfTwoArrays(arr1,arr2,size1,size2);
}

void sumOfTwoArrays(int* arr1,int* arr2,int size1,int size2){
    int sum1=0;
    int sum2=0;
    for(int i=0;i<size1;i++){
        sum1=sum1+arr1[i];
    }
    for(int i=0;i<size2;i++){
        sum2=sum2+arr2[i];
    }
    printf("Sum of two given array elements = %d",sum1+sum2);
}