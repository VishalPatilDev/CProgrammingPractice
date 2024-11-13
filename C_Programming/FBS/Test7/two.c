#include<stdio.h>
#define MAX_SIZE 10

void store(int* arr,int size);
int isPallin(int* arr,int size);

void main(){
    int arr[MAX_SIZE];
    int xPos,yPos,size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    store(arr,size);
    int res =isPallin(arr,size);
    if(res){
        printf("Given array is pallindrome");
    }
    else{
        printf("Given array is not pallindrome");
    }
}
void store(int* arr,int size){
    printf("Enter elements in array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
int isPallin(int* arr,int size){
    for(int i=0;i<size;i++){
        if (arr[i] != arr[size - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1;
}

