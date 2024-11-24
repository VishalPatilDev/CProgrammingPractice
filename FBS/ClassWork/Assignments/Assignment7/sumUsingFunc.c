#include<stdio.h>
void sumOfArrays(int* ,int*,int,int);
void main(){
    int arr1[100],size1;
    printf("Enter size of array1 : ");
    scanf("%d",&size1);
    
    

    int arr2[100],size2;
    printf("Enter size of array2 : ");
    scanf("%d",&size2);
    sumOfArrays(arr1,arr2,size1,size2);
    
    
}
void sumOfArrays(int* arr1,int* arr2,int size1,int size2){
    int sum1=0,sum2=0;
    printf("Enter elements in array1 : ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<size1;i++){
        sum1=sum1+arr1[i];
    }
    printf("Enter elements in array2 : ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<size2;i++){
        sum2=sum2+arr2[i];
    }
    printf("Sum of two given array elements = %d",sum1+sum2);

}