#include<stdio.h>
void main(){
    int arr[100],prime;
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Prime numbers in given array : ");
    for(int i =0;i<size;i++){
        prime=1;
        for(int j=2;j<arr[i]/2;j++){
            if(arr[i]%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d ",arr[i]);
        }

    }
    

}