#include<stdio.h>
void main(){
    int arr[10];
    int size,i;
    printf("Enter size of array");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The minimum value is : %d ",min);
}