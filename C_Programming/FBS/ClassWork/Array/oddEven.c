#include<stdio.h>
void main(){
    int arr[100];
    
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Even nos in array is : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d\t",arr[i]);
        }
    }
    printf("Odd nos in array is : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d\t",arr[i]);
        }
    }
}