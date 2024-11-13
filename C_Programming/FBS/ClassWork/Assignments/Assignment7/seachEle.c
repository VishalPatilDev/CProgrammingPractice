#include<stdio.h>
void main(){
    int arr[10]={10,166,24,47,55,14,155,211,202};
    int num;
    // printf("Enter size of array : ");
    // scanf("%d",&size);
    printf("Enter number you want to search in given array : ");
    scanf("%d",&num);
    // printf("Enter elements : ");
    // for(int i =0;i<size;i++){
    //     scanf("%d",&arr[i]);
    // }
    for(int i=0;i<10;i++){
        if(num==arr[i]){
            printf("Number found at index : %d",i+1);
            break;
        }
    }
}