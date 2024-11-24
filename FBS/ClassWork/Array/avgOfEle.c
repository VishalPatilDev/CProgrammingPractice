#include<stdio.h>
void main(){
    int arr[100];
    int size,sum=0;
    int avg;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        avg = sum/size;
    }
    printf("Sum of array : %d\n",sum);
    printf("Average of given elements in array is : %d",avg);
}