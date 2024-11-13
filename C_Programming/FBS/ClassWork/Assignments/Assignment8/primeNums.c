#include<stdio.h>
void primeNums(int* arr,int);
void main(){
    int arr[100];
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    primeNums(arr,size);
}
void primeNums(int* arr, int size) {
    int foundPrime = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 2) continue;
        int prime = 1;
        for (int j = 2; j <= sqrt(arr[i]); j++) {
            if (arr[i] % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d ", arr[i]);
            foundPrime = 1;
        }
    }
    if (!foundPrime) {
        printf("No prime numbers found\n");
    } else {
        printf("\n");
    }
}