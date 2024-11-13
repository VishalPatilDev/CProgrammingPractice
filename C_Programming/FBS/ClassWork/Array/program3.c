//min element in array
#include<stdio.h>
void main(){
    int arr[5];
    int min=arr[0];
    printf("Enter elements of array : ");
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("min : %d",min);
    
}