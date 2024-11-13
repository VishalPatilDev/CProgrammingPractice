#include<stdio.h>
void main(){
    int arr1[100],size1,sum1=0;
    printf("Enter size1 of array : ");
    scanf("%d",&size1);
    printf("Enter elements in array : ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<size1;i++){
        sum1=sum1+arr1[i];
    }

    int arr2[100],size2,sum2=0;
    printf("Enter size1 of array : ");
    scanf("%d",&size2);
    printf("Enter elements in array : ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<size2;i++){
        sum2=sum2+arr2[i];
    }
    printf("Sum of two given array elements = %d",sum1+sum2);
}