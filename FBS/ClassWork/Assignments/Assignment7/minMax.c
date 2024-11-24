#include<stdio.h>
void main(){
    int arr[100],size;
    
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Minimum value in given array is : %d\n",min);
    printf("Maximum value in given array is : %d",max);

}