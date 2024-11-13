#include<stdio.h>
void main()
{
    int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<size/2 ;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    printf("Reversed array is :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}