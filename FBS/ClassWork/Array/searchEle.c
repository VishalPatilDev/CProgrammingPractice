#include<stdio.h>
void main(){
    int arr[10]={10,15,20,33,234,55};
    int element;
    int size;
    printf("Enter the element you want to search in array : ");
    scanf("%d",&element);
    // printf("Enter size of array : ");
    // scanf("%d",&size);
    
    // printf("Enter elements of array : ");
    // for(int i=0;i<size;i++){
    //     scanf("%d",&arr[i]);
    // }
    for(int i=0;i<10;i++){
        if(element==arr[i]){
            printf("Element found at index : %d",i);
            break;
        }
        
    }

}