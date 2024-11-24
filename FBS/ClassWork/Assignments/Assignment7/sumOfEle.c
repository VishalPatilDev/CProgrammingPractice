#include<stdio.h>
void main(){
    int arr[100],size,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("Sum of elements in given array = %d",sum);

}